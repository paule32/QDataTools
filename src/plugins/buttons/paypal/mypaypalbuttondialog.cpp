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
#include "mypaypalbuttonwidget.h"
#include "mypaypalbuttondialog.h"
#include "mypaypalbuttonwizard.h"

#include <QtDesigner/QDesignerFormWindowInterface>
#include <QtDesigner/QDesignerFormWindowCursorInterface>

#include <QDialogButtonBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QVariant>

extern
MyPayPalButtonWizard * my_palwizui;
MyPayPalButtonDialog::MyPayPalButtonDialog(
      MyPayPalButtonWidget *tic
    , QWidget *parent)
    : QDialog (parent)
    , editor(new MyPayPalButtonWidget)
    , dataTable(tic)
    , buttonBox(new QDialogButtonBox(QDialogButtonBox::Ok))
{
    //editor->setState(QString("sssss"));
    //connect(buttonBox->button(QDialogButtonBox::Reset), &QAbstractButton::clicked, this, &QDataTableDialog::resetState);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(editor);
    mainLayout->addWidget(buttonBox);

    setLayout(mainLayout);
    setWindowTitle("Properties...");

    my_palwizui->ui->textEdit->setText(ExternUrl());
    my_palwizui->m_paypaldlg  = this;
}
