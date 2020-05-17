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
#include "setuptool_mode.h"
#include "ui_setuptool_mode.h"

//#include "mydatabase.h"

namespace mdb { extern void testung(); }

SetupTool_Mode::SetupTool_Mode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetupTool_Mode)
{
    ui->setupUi(this);
}

SetupTool_Mode::~SetupTool_Mode()
{
    delete ui;
}

void SetupTool_Mode::on_createCA_clicked()
{
    ///mdb::testung();
}

// actions:
void SetupTool_Mode::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    static int cnt = 0;

    QString m_name = item->text(column);
    QString m_laat = QString("action: %1").arg(++cnt);

    QStringList m_list = { m_laat };

    QTreeWidgetItem *m_item = new
    QTreeWidgetItem (m_list);

    if (m_name == QString("On Startup")) {
        item->addChild(m_item);
    }
    if (m_name == QString("On Pre Install")) {
        item->addChild(m_item);
    }
    if (m_name == QString("On Post Install")) {
        item->addChild(m_item);
    }
    if (m_name == QString("On Shutdown")) {
        item->addChild(m_item);
    }
}

// screens:
void SetupTool_Mode::on_treeWidget_5_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    static int cnt = 0;

    QString m_name = item->text(column);
    QString m_laat = QString("screen: %1").arg(++cnt);

    QStringList m_list = { m_laat };

    QTreeWidgetItem *m_item = new
    QTreeWidgetItem (m_list);

    if (m_name == QString("Add Screen")) {
        item->addChild(m_item);
    }
}
