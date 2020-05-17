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
#include <QLibraryInfo>
#include <QLocale>

#include <QComboBox>

#include <QMessageBox>
#include <QTranslator>

#include <QTreeWidget>
#include <QTreeWidgetItem>

#include "myssltoolmode.h"
#include "ui_myssltoolmode.h"

MySSLToolMode::MySSLToolMode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MySSLToolMode)
{
    ui->setupUi(this);
    ui->treeWidget->expandAll();

    QString m_path = QString("%1").arg(
        QLibraryInfo::location(
        QLibraryInfo::TranslationsPath));
    if (m_path.trimmed().size() < 1) {
        QMessageBox::warning(0,
        tr("Warning"),
        tr("Not all files are available.\n"
           "Operation aborted."));
        return;
    }
    QMessageBox::information(0,"info",m_path);

    QString m_lang = QLocale().name();
    QString m_land ;

    if (m_lang.trimmed().size() < 1) {
        QMessageBox::warning(0,
            tr("Warning"),
            tr("cant get locale settings."));
        return;
    }
    if ((QLocale().country() == QLocale::UnitedStates)
    ||  (QLocale().country() == QLocale::UnitedKingdom))
         m_land = "en"; else
         m_land = "de";

    QTranslator translator;

    if (!translator.load(
        QLatin1String("%1/datatool_%2").
            arg(m_path).
            arg(m_land))) {
        QMessageBox::warning(0,
            tr("Error"),
            tr(
            "translation file could not be found.\n"
            "Default language will be set to English."));
        return;
    }
}

MySSLToolMode::~MySSLToolMode()
{
    delete ui;
}

void MySSLToolMode::on_createCert_clicked()
{
    QTreeWidgetItem * m_aitem = ui->certsTree->currentItem();
    if (m_aitem == nullptr) {
        QMessageBox::warning(0,
        tr("Warning"),
        tr("No CA is selected."));
        return;
    }
    if (!m_aitem->text(0).startsWith("CA")) {
        QMessageBox::warning(0,
        tr("Warning"),
        tr("No CA is selected."));
        return;
    }

    QTreeWidgetItem * m_citem = new
    QTreeWidgetItem();

    m_citem->setText(0,"Certificate");
    m_aitem->addChild(m_citem);
}

void MySSLToolMode::on_createCA_clicked()
{
    if (ui->domainEdit->text().trimmed().length() < 1) {
        QMessageBox::warning(0,
        tr("Warning"),
        tr("Domain Field is not filled in.\n"
           "Operation aborted."));
        return;
    }

    QTreeWidgetItem * m_aitem = new QTreeWidgetItem();

    m_aitem->setText(0,QString("CA - %1").
    arg(ui->domainEdit->text()));

    ui->certsTree->insertTopLevelItem(0,m_aitem);

#if 0
    int count = 0;
    for (auto item : ui->certsTree->findItems("*", Qt::MatchWildcard)) {
        ++count;
        item->setFlags (item->flags () | Qt::ItemIsEditable);
    }

    if (count < 1) {
        ui->certsTree->insertTopLevelItem(0,m_citem);
    }   else {
        //ui->certsTree->addItem(m_item);
    }
#endif
}

void MySSLToolMode::on_certsTree_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    Q_UNUSED(column)
    QString ca = item->text(0);
    if (ca.startsWith("CA")) {
        ca = ca.remove(0,4);
        ui->domainEdit->setText(ca);
    }
}

void MySSLToolMode::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
}
