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
#ifndef QDATATABLEWIZARD_H
#define QDATATABLEWIZARD_H

#include <QWizard>

#include <QListWidget>
#include <QListWidgetItem>

#include <QTableWidget>
#include <QTableWidgetItem>

namespace Ui {
class QDataTableWizard;
}

class QDataTableWizard : public QWizard
{
    Q_OBJECT

public:
    explicit QDataTableWizard(QWidget *parent = nullptr);
    ~QDataTableWizard();

    Ui::QDataTableWizard *ui;

private slots:
    void on_connectButton_clicked();
    void on_dbListWidget_itemClicked(QListWidgetItem *item);
    void on_tableListWidget_itemClicked(QListWidgetItem *item);
    void on_cmdButtonAddTable_clicked();
    void on_cmdButtonDelTable_clicked();
    void on_tableWidget_3_itemDoubleClicked(QTableWidgetItem *item);
    void on_donateButton_clicked();
    void on_commandLinkButton_7_clicked();
};

#endif // QDATATABLEWIZARD_H
