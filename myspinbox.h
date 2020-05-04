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
#ifndef MYSPINBOX_H
#define MYSPINBOX_H

#include <QObject>
#include <QWidget>
#include <QSpinBox>
#include <QLabel>
#include <QVBoxLayout>

class MySpinBox : public QWidget
{
    Q_OBJECT
public:
    MySpinBox(QWidget * parent = nullptr, QString txt = "Text");

    uint32_t   getValue() const { return spin_box->value(); }

    QLabel   * getLabel    () const { return spin_lbl; }
    QString    getLabelText() const { return spin_txt; }
    QFont      getFont     () const { return spin_fnt; }
    QSpinBox * getSpin     () const { return spin_box; }

    void setLabel(QLabel * value) { spin_lbl = value; }
    void setFont (QFont    value) { spin_fnt = value; }

    void setLabel(QString  value) { spin_txt = value; spin_lbl->setText (value); }
    void setValue(uint32_t value) { spin_box->setValue(value); }

private:
    QSpinBox * spin_box;
    QLabel   * spin_lbl;
    QFont      spin_fnt;
    QString    spin_txt;
};

#endif // MYSPINBOX_H
