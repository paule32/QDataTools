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
#ifndef MYCODEEDITORHIGHLIGHTER_H
#define MYCODEEDITORHIGHLIGHTER_H

#include <QObject>
#include <QVector>
#include <QWidget>
#include <QRegExp>
#include <QTextCharFormat>
#include <QSyntaxHighlighter>

#include "mycodeeditor.h"

class MyCodeEditor;

class MyCodeEditorHighlighter: public QSyntaxHighlighter
{
    Q_OBJECT
public:
    MyCodeEditorHighlighter(MyCodeEditor *parent = nullptr);
protected:
    void highlightBlock(const QString &text) Q_DECL_OVERRIDE;
private:
    struct HighlightRule      {
        QRegExp pattern;
        QTextCharFormat format;
    };
    QVector<HighlightRule> HighlightRules;

    QRegExp commentStart, cppComment;
    QRegExp commentEnd;

    QTextCharFormat cppCommentFormat;
    QTextCharFormat multiLineCommentFormat;
};

#endif // MYCODEEDITORHIGHLIGHTER_H
