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
#ifndef MYCODEEDITOR_H
#define MYCODEEDITOR_H

#include <QWidget>
#include <QPlainTextEdit>
#include <QPaintEvent>

#include "mycodeeditorhighlighter.h"

class MyCodeEditor: public QPlainTextEdit
{
    Q_OBJECT
public:
    explicit MyCodeEditor  (class QWidget *parent = 0);
    void linePaintEvent(class QPaintEvent *event) ;
    int  gutterWidth();
    int  lines;
protected:
    void mousePressEvent(class QMouseEvent  *event) Q_DECL_OVERRIDE;
    void keyPressEvent  (class QKeyEvent    *event) Q_DECL_OVERRIDE;
    void resizeEvent    (class QResizeEvent *event) Q_DECL_OVERRIDE;
public slots:
    void on_cursorPositionChanged();
    void on_gutterUpdate(int);
    void on_linesUpdate(const QRect &rect, int dy);
private:
    class MyCodeEditorHighlighter * highlighter;
    class MyCodeEditorGutter      * gutter;
public slots:
//    void on_dockHelpOpen();
//    void on_parseText();
//    void ShowContextMenu(const QPoint& pos);
signals:
//    void onHelpF1();
};

class MyCodeEditorGutter : public QWidget
{
    Q_OBJECT
public:
    explicit MyCodeEditorGutter(class MyCodeEditor *editor);
protected:
    void paintEvent(class QPaintEvent *event) {
        codeEditor->linePaintEvent(event);
    }
private:
    class MyCodeEditor *codeEditor;
};

#endif // MYCODEEDITOR_H
