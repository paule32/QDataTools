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
#include <cstdio>
#include <QDomDocument>
#include <QTextStream>

#include <QLibraryInfo>
#include <QLocale>

#include <QProcess>
#include <QComboBox>

#include <QMessageBox>
#include <QTranslator>

#include <QTreeWidget>
#include <QTreeWidgetItem>

#include "myssltoolmode.h"
#include "ui_myssltoolmode.h"

static inline QString folderElement   () { return QStringLiteral("folder" ); }
static inline QString versionAttribute() { return QStringLiteral("version"); }

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

#if 0
    QTreeWidgetItem * m_citem = new
    QTreeWidgetItem();

    m_citem->setText(0,"Certificate");
    m_aitem->addChild(m_citem);
#endif
}

bool MySSLToolMode::write_cert(QString pro_str)
{
    QProcess * pro = new QProcess;
    pro->setWorkingDirectory(ui->pathEdit->text());
    pro->start(pro_str);

    if (!pro->waitForFinished()) {
        QString m_text =
        QString("cakey build process failed: %1").arg(pro->errorString());
        QMessageBox::warning(0,
        QObject::tr("Error"),m_text);
        return false;
    }
    if (pro->exitCode() > 0) {
        QString m_text =
        QString("abnormal program exit:\n"
                "code:  %1\n"
                "error: %2")
                .arg(pro->exitCode())
                .arg(pro->errorString());
        QMessageBox::warning(0,
        tr("Error"),m_text);
        delete pro;
        return false;
    }
    delete pro;
    return true;
}

void MySSLToolMode::on_createCA_clicked()
{
    QProcess * expect = new QProcess;
    expect->start("which",{"expect"});
    if (expect->exitCode() > 0) {
        QMessageBox::warning(0,
        tr("Error"),
        tr("application 'expect' is needed"));
        return;
    }
    delete expect;

    if (ui->pathEdit->text().trimmed().length() < 1) {
        QMessageBox::warning(0,
        tr("Warning"),
        tr("Path Field is not filled in.\n"
           "Operation aborted."));
        return;
    }
    if (ui->domainEdit->text().trimmed().length() < 1) {
        QMessageBox::warning(0,
        tr("Warning"),
        tr("Domain Field is not filled in.\n"
           "Operation aborted."));
        return;
    }
    if (ui->ownerEdit->text().trimmed().length() < 1) {
        QMessageBox::warning(0,
        tr("Warning"),
        tr("Owner Field is not filled in.\n"
           "Operation aborted."));
        return;
    }
    if (ui->daysEdit->text().trimmed().length() < 1) {
        QMessageBox::warning(0,
        tr("Warning"),
        tr("Days Field is not filled in.\n"
           "Operation aborted."));
        return;
    }
    if (ui->passwordEdit->text().trimmed().length() < 1) {
        QMessageBox::warning(0,
        tr("Warning"),
        tr("Password Field is not filled in.\n"
           "Operation aborted."));
        return;
    }

    // openssl CA private key ...
    QString m_ca_root =
    QString("openssl genrsa -out %1/CA-key.pem -passout pass:%2 -des3 2048")
            .arg(ui->pathEdit    ->text().trimmed())
            .arg(ui->passwordEdit->text().trimmed());

    // CA root cert ...
    QString m_ca_cert =
    QString("openssl req -new key %1/CA-key.pem -x509 -days %2 -out %1/CA-cert.pem")
            .arg(ui->pathEdit->text().trimmed())
            .arg(ui->daysEdit->text().trimmed());

    if (write_cert(m_ca_root)) {
        QMessageBox::information(0,
        tr("Attention !!!"),
        tr("Please keep secret your CA-key !!!"));
    }

    // sign server cert ...
    QString m_sv_cert =
    QString("openssl genrsa -out %1/server.key.pem -passout pass:%2 -des3 2048")
            .arg(ui->pathEdit    ->text().trimmed())
            .arg(ui->passwordEdit->text().trimmed());

    if (!write_cert(m_ca_cert)) return;
    if (!write_cert(m_sv_cert)) return;

    // save file data into xml file ...
    QString xml_file = QString("%1/ca-%2.xml")
            .arg(ui->pathEdit  ->text().trimmed())
            .arg(ui->domainEdit->text().trimmed());
    QFile file_xml;
    if ( !file_xml.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(0,tr("Error"),
        tr("can't open '%1' in write mode.").arg(xml_file));
        return;
    }

    QDomDocument domDocument;
    QString      errorStr;
    int          errorLine;
    int          errorColumn;
    if (!domDocument.setContent(&file_xml, true,
        &errorStr,
        &errorLine,
        &errorColumn)) {
        QMessageBox::warning(0,
        tr("DOM CA - Certification Authority"),
        tr("ParseError at line: %1, column: %2:\n%3")
           .arg(errorLine)
           .arg(errorColumn)
           .arg(errorStr));
        return;
    }

    QDomElement root = domDocument.documentElement();
    if (root.tagName() != "ca") {
        QMessageBox::information(0,
        tr("DOM CA - Certification Authority"),
        tr("The file is not an CA-XML file."));
        return;
    }   else {
        if (root.hasAttribute(versionAttribute())
        &&  root.attribute   (versionAttribute()) != QLatin1String("1.0")) {
            QMessageBox::information(0,
            tr("DOM CA - Certification Authority"),
            tr("The file version is not valid."));
            return;
        }
    }

    QDomElement child = root.firstChildElement(folderElement());
    while (!child.isNull()) {
        //parseFolderElement(child);
        child = child.nextSiblingElement(folderElement());
    }

    QTextStream out(&file_xml);
    domDocument.save(out, 4);

    file_xml.close();

    QTreeWidgetItem * m_aitem = new QTreeWidgetItem();
    QTreeWidgetItem * m_ritem = new QTreeWidgetItem();
    QTreeWidgetItem * m_kitem = new QTreeWidgetItem();
    QTreeWidgetItem * m_citem = new QTreeWidgetItem();
    QTreeWidgetItem * m_sitem = new QTreeWidgetItem();
    QTreeWidgetItem * m_pitem = new QTreeWidgetItem();
    QTreeWidgetItem * m_litem = new QTreeWidgetItem();
    QTreeWidgetItem * m_witem = new QTreeWidgetItem();

    m_aitem->setText(0,QString("CA - %1").arg(ui->domainEdit->text().trimmed()));
    m_ritem->setText(0,QString("root"));
    m_kitem->setText(0,QString("key.pem"));
    m_citem->setText(0,QString("crt.pem"));

    m_sitem->setText(0,QString("server"));
    m_witem->setText(0,QString("workstation"));
    m_litem->setText(0,QString("application"));
    m_pitem->setText(0,QString("person"));

    m_aitem->addChild(m_ritem);
    m_ritem->addChild(m_kitem);
    m_ritem->addChild(m_citem);

    m_aitem->addChild(m_sitem);
    m_sitem->addChild(m_witem);
    m_witem->addChild(m_litem);
    m_litem->addChild(m_pitem);

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
        ui->domainEdit->setText(ca.trimmed());
    }
}

void MySSLToolMode::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
}
