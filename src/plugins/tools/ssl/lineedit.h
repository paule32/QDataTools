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
#ifndef LINEEDIT_H
#define LINEEDIT_H

#include <QWidget>
#include <QLineEdit>
#include <QEvent>
#include <QFocusEvent>

class MyLineSSLEdit: public QLineEdit
{
    Q_OBJECT
    Q_CLASSINFO("Version","0.0.1")

    Q_PROPERTY(int Tag READ Tag WRITE setTagValue NOTIFY tagChanged)

public:
    explicit MyLineSSLEdit(QWidget *parent = nullptr);

    void setTagValue(int value) { m_tagValue = value; emit tagChanged(value); }
    int     Tag() const         { return m_tagValue; }

signals:
    void tagChanged(int value);

protected:
    void mouseMoveEvent(QMouseEvent * event);
    //void focusInEvent (QFocusEvent * event);
    void focusOutEvent(QFocusEvent * event);

private:
    int m_tagValue;
};

#endif  // LINEEDIT_H
