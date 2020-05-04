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
#include <cmath>

#include "qdatatimerwizard.h"
#include "ui_qdatatimerwizard.h"

#include <QLabel>
#include <QString>
#include <QSpinBox>
#include <QMessageBox>
#include <QVBoxLayout>

#include <QVector>

uint32_t                     timerCounter;
QVector<MyTimerStringList *> timerList;

QDataTimerWizard::QDataTimerWizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::QDataTimerWizard)
{
    ui->setupUi(this);

    // check prev. data ...
    //MyTimerStringList * str_list;
    for (MyTimerStringList *vlist: timerList) {
        ui->listWidget  ->addItem(vlist->getName());
        ui->listWidget_2->addItem(vlist->getFunc());
        ui->listWidget_3->addItem(vlist->getName());
    }

    if (timerList.count() > 0) {
        if (timerList.at(0) == nullptr) {
            QMessageBox::warning(this,"Error","Internal Error");
            return;
        }
        ui->scrollLayout->addWidget(timerList.at(0)->getSpin());
    }
}

QDataTimerWizard::~QDataTimerWizard()
{
    delete ui;
}

void QDataTimerWizard::on_connectButton_clicked()
{

}

// timer function's ...
void QDataTimerWizard::on_commandLinkButton_4_clicked()
{
    MyTimerStringList * str_list = new MyTimerStringList(
    QString("Timer%1").arg(++timerCounter));

    str_list->setName(QString("Timer%1")       .arg(timerCounter));
    str_list->setFunc(QString("Timer%1_onShot").arg(timerCounter));

    timerList.push_back(str_list);

    ui->listWidget  ->addItem(str_list->getName());
    ui->listWidget_2->addItem(str_list->getFunc());
    ui->listWidget_3->addItem(str_list->getName());

    ui->scrollLayout->addWidget(str_list->getSpin());
}

// timer code
void QDataTimerWizard::on_listWidget_3_itemChanged(QListWidgetItem *item)
{
    Q_UNUSED(item)
#if 0
    int idx  = 0;
    for (idx = 0; idx < ui->listWidget_3->count(); ++idx) {
        if (item->text() == timerList.at(idx).func) {
            ui->timerTextEdit->document()->setPlainText(timerList.at(idx).code);
        }
    }
#endif
}
