// --------------------------------------------------------------------------------
// MIT License
//
// Copyright (c) 2020 Jens Kallup
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// --------------------------------------------------------------------------------
#include <QTextOption>
#include <QPainter>

#include "mycodeeditor.h"
#include "mycodeeditorhighlighter.h"

MyCodeEditor::MyCodeEditor(QWidget *parent) :
    QPlainTextEdit(parent)
{
    setObjectName("TheCodeEditor");
    setWordWrapMode(QTextOption::NoWrap);
    setAcceptDrops(true);

    gutter = new MyCodeEditorGutter(this);
    lines  = 1;

    connect(this, SIGNAL(cursorPositionChanged() ), this, SLOT(on_cursorPositionChanged()));
    connect(this, SIGNAL(updateRequest(QRect,int)), this, SLOT(on_linesUpdate(QRect,int)));

    highlighter = new MyCodeEditorHighlighter(this);

    on_gutterUpdate(0);
    on_cursorPositionChanged();
}

void MyCodeEditor::on_gutterUpdate(int)
{
    setViewportMargins(gutterWidth(), 0,0,0);
}

void MyCodeEditor::on_linesUpdate(const QRect &rect, int dy)
{
    if (dy)
    gutter->scroll(0,dy); else
    gutter->update(0,rect.y(),
    gutter->width() ,rect.height());

    if (rect.contains(viewport()->rect()))
       on_gutterUpdate(0);
}

void MyCodeEditor::linePaintEvent(class QPaintEvent *event)
{
    QPainter painter(gutter);
    painter.fillRect(event->rect(), Qt::lightGray);

    QTextBlock block = firstVisibleBlock();
    int blockNumber = block.blockNumber();
    int top = static_cast<int>(blockBoundingGeometry(block).
                    translated(contentOffset()).top());
    int bottom = top + static_cast<int>(blockBoundingRect(block).height());

    lines = 0;
    while (block.isValid() && top <= event->rect().bottom()) {
        if (block.isVisible() && bottom >= event->rect().top()) {
            QString number = QString::number(blockNumber + 1);
            painter.setPen(Qt::black);
            painter.drawText(0, top, gutter->width(),
                             fontMetrics().height(),
                             Qt::AlignRight, number);
            ++lines;
        }

        block = block.next();
        top = bottom;
        bottom = top + static_cast<int>(blockBoundingRect(block).height());
        ++blockNumber;
    }
}

int MyCodeEditor::gutterWidth()
{
    int digits = 2;
    int max = qMax(1, blockCount());
    while (max >= 10) {
        max /= 10;
        ++digits;
    }

    int space = 3 + fontMetrics().horizontalAdvance(QLatin1Char('9')) * digits;
    return space;
}

void MyCodeEditor::on_cursorPositionChanged()
{
    QList<QTextEdit::ExtraSelection> extraSelections;

    if (!isReadOnly()) {
        QTextEdit::ExtraSelection selection;
        QColor lineColor = QColor(Qt::yellow).lighter(160);

        selection.format.setBackground(lineColor);
        selection.format.setProperty(QTextFormat::FullWidthSelection, true);
        selection.cursor = textCursor();
        selection.cursor.clearSelection();
        extraSelections.append(selection);
    }

    setExtraSelections(extraSelections);
}

void MyCodeEditor::resizeEvent(QResizeEvent *event)
{
    QPlainTextEdit::resizeEvent(event);

    QRect cr = contentsRect();
    gutter->setGeometry(
    QRect(cr.left(),
          cr.top (), gutterWidth(),
          cr.height()));
}

void MyCodeEditor::keyPressEvent(QKeyEvent *event)
{
    event->accept();
    QPlainTextEdit::keyPressEvent(event);
}

void MyCodeEditor::mousePressEvent(class QMouseEvent  *event)
{
    QPlainTextEdit::mousePressEvent(event);
    on_cursorPositionChanged();
}
