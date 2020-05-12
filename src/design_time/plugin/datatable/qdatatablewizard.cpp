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
#include "qdatatablewizard.h"
#include "ui_qdatatablewizard.h"

#include <QtDesigner/QDesignerFormWindowManagerInterface>
#include <QtDesigner/QDesignerFormEditorInterface>
#include <QtDesigner/QExtensionManager>
#include <QtPlugin>

#include <coreplugin/editormanager/editormanager.h>
#include <coreplugin/editormanager/ieditor.h>

#include <QObject>
#include <QLabel>

#include <QListWidget>
#include <QListWidgetItem>

#include <QTableWidget>
#include <QTableWidgetItem>

#include <QDesktopServices>
#include <QMessageBox>

QDataTableWizard::QDataTableWizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::QDataTableWizard)
{
    ui->setupUi(this);
    /*
    ui->progressBar->setVisible(false);
    ui->dataLabel  ->setVisible(false);
    ui->dataTimer  ->setVisible(false);*/
}

QDataTableWizard::~QDataTableWizard()
{
    delete ui;
}

void QDataTableWizard::on_connectButton_clicked()
{
    QMessageBox::information(this,"Info","not implemented, yet.");
}

// database
void QDataTableWizard::on_dbListWidget_itemClicked(QListWidgetItem *item)
{
    if (item->checkState() == Qt::Checked)
        item->setSelected(false); else
        item->setSelected(true );
}

// table
void QDataTableWizard::on_tableListWidget_itemClicked(QListWidgetItem *item)
{
    if (item->checkState() == Qt::Checked)
        item->setSelected(false); else
        item->setSelected(true );
}

// add table
void QDataTableWizard::on_cmdButtonAddTable_clicked()
{
    QListWidgetItem * item = new QListWidgetItem(QLatin1String("New Table"));
    ui->tableListWidget->addItem(item);
}

// delete table
void QDataTableWizard::on_cmdButtonDelTable_clicked()
{
    if (ui->tableListWidget->currentItem() == nullptr) {
        QMessageBox::warning(this,"Warning","You have to do select one or more Table items\nthat can be delete.");
        return;
    }

    ui->tableListWidget->removeItemWidget(
    ui->tableListWidget->currentItem());
}

// table settings - header
void QDataTableWizard::on_tableWidget_3_itemDoubleClicked(QTableWidgetItem *item)
{
    Q_UNUSED(item)
}

void QDataTableWizard::on_donateButton_clicked()
{
    QUrl _url(QLatin1String("https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=AJTNQK38VKWFW&source=url"));
    QDesktopServices::openUrl(_url);
}

extern QDesignerFormEditorInterface * my_formEditor;

void QDataTableWizard::on_commandLinkButton_7_clicked()
{
#if 0
    QDesignerFormWindowManagerInterface *manager = 0;
    QDesignerFormWindowInterface *formWindow = 0;

    manager = my_formEditor->formWindowManager();
    formWindow = manager->formWindow(0);
#endif

    Core::EditorManager::openEditorAt(
    QString("/etc/hosts"),1,1,
    "JostEditor",
    Core::EditorManager::OpenInOtherSplit);
}
