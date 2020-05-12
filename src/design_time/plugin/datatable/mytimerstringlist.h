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
#ifndef MYTIMERSTRINGLIST_H
#define MYTIMERSTRINGLIST_H

#include <QObject>
#include <QLabel>
#include <QWidget>
#include <QSpinBox>
#include <QVBoxLayout>

#include "myspinbox.h"

class MyTimerStringList
{
public:
    MyTimerStringList(QWidget * _parent = nullptr);
    MyTimerStringList(QVBoxLayout *lay, QString txt);

    QString     getName ()  const { return name; }
    QString     getFunc ()  const { return func; }
    QString     getCode ()  const { return code; }

    MySpinBox * getSpin ()  const { return spin;    }
    uint32_t    getValue()  const { return m_value; }

    void setSpin(MySpinBox  * sp) { spin = sp;       }
    void setValue(uint32_t value) { m_value = value; }

    void setName (QString  value) { name = value; }
    void setFunc (QString  value) { func = value; }
    void setCode (QString  value) { code = value; }

private:
    QString  name;
    QString  func;
    QString  code;

    uint32_t    m_value = 1000;
    MySpinBox * spin  ;
    QWidget   * parent;
};

#endif // MYTIMERSTRINGLIST_H