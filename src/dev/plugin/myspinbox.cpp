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
#include "myspinbox.h"
#include <QWidget>
#include <QSpinBox>
#include <QMessageBox>
#include <QVBoxLayout>

MySpinBox::MySpinBox(QVBoxLayout *lay, QWidget * parent, QString txt)
    : QWidget(parent)
{
    setMinimumWidth(100);
    setMinimumHeight(74);

    QVBoxLayout * _lay = new QVBoxLayout;

    spin_lbl = new QLabel(this);
    spin_box = new QSpinBox(this);

    spin_lbl->setText(txt);
    spin_box->setRange(500,1000*60);
    spin_box->setValue(1000);

    _lay->addWidget(spin_lbl);
    _lay->addWidget(spin_box);

    lay->addLayout(_lay);
    setLayout(lay);
}
