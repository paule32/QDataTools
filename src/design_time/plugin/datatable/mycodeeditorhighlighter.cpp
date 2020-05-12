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
#include <QTextCursor>
#include <QString>
#include <QtWidgets/QPlainTextEdit>
#include <QtGui/QSyntaxHighlighter>

#include "mycodeeditor.h"
#include "mycodeeditorhighlighter.h"

MyCodeEditorHighlighter::MyCodeEditorHighlighter(MyCodeEditor *parent)
    : QSyntaxHighlighter(parent->document())
{
    cppCommentFormat.setForeground(Qt::red);
    cppCommentFormat.setFontWeight(QFont::Bold);
    cppCommentFormat.setFontItalic(true);

    commentStart = QRegExp("/\\*");
    commentEnd   = QRegExp("\\*/");
}

void MyCodeEditorHighlighter::highlightBlock(const QString &text)
{
    enum { NormalState = -1, InsideCStyleComment };

    int state = previousBlockState();
    int start = 0;

    for (int i = 0; i < text.length(); ++i) {
        if (state == InsideCStyleComment) {
            if (text.mid(i, 2) == "*/") {
                state = NormalState;
                setFormat(start, i - start + 2, cppCommentFormat);
            }   }   else {
            if (text.mid(i,2) == "**") {
                setFormat(i, text.length() - i, cppCommentFormat);
                break;
            }
            if (text.mid(i,2) == "&&") {
                setFormat(i, text.length() - i, cppCommentFormat);
                break;
            }
            // C++ comment
            if (text.mid(i,2) == "//") {
                setFormat(i, text.length() - i, cppCommentFormat);
                break;  }
                else if (text.mid(i, 2) == "/*") {
                start = i;
                state = InsideCStyleComment;
            }
        }
    }

    if (state == InsideCStyleComment)
    setFormat(start, text.length() - start, cppCommentFormat);

    setCurrentBlockState(state);
}
