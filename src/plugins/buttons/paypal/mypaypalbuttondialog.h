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
#ifndef MYPAYPALBUTTONDIALOG_H
#define MYPAYPALBUTTONDIALOG_H

#include <QDialog>
#include <QWidget>
#include <QDialog>
#include <QDialogButtonBox>

#include "mypaypalbuttonwidget.h"
#include "mypaypalbuttonwizard.h"

class MyPayPalButtonDialog : public QDialog
{
    Q_OBJECT
    Q_PROPERTY(QString ExternUrl READ ExternUrl WRITE setExternUrl NOTIFY ExternUrlChanged)

public:
    explicit MyPayPalButtonDialog (
        MyPayPalButtonWidget *tic ,
        QWidget *parent = nullptr);

    void setExternUrl(QString value) { m_payurl = value; emit ExternUrlChanged(value); }
    QString ExternUrl() const { return m_payurl; }

signals:
    void ExternUrlChanged(QString value);

private:
    MyPayPalButtonWidget * editor;
    MyPayPalButtonWidget * dataTable;

    //MyPayPalButtonWizard * m_wizard;
    QDialogButtonBox * buttonBox;
    QString m_payurl ;
};

#endif
