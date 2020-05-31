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
#include <vector>

#include <QDebug>
#include <QComboBox>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QFileDialog>
#include <QTextStream>

#include <QLibraryInfo>
#include <QLocale>

#include <QProcess>
#include <QComboBox>

#include <QMessageBox>
#include <QTranslator>

#include <QTreeWidget>
#include <QTreeWidgetItem>

#include <QSslKey>
#include <QSslCertificate>
#include <QSslConfiguration>
#include <QNetworkProxyFactory>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

#include "myssltoolmode.h"
#include "ui_myssltoolmode.h"

std::vector<my_ssl_edit_struct> ssl_edit_vector;

MySSLToolMode::MySSLToolMode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MySSLToolMode)
{
    ui->setupUi(this);
    ui->textBrowser->document()->clear();

    // without SSL, we don't need setup stuff
    // low time consuming ...
    if (!QSslSocket::supportsSsl()) {
        QMessageBox::warning(window(),
        tr("Error"),
        tr("No SSL support at this platform"));
        return;
    }

    // ca ...
    ssl_edit_vector.emplace_back(1, ui->pathEdit    , this);
    ssl_edit_vector.emplace_back(1, ui->domainEdit  , this);
    ssl_edit_vector.emplace_back(1, ui->ownerEdit   , this);
    ssl_edit_vector.emplace_back(1, ui->daysEdit    , this);
    ssl_edit_vector.emplace_back(1, ui->passwordEdit, this);

    // server ...
    ssl_edit_vector.emplace_back(2, ui->serverPathEdit    , this);
    ssl_edit_vector.emplace_back(2, ui->serverNameEdit    , this);
    ssl_edit_vector.emplace_back(2, ui->serverOwnerEdit   , this);
    ssl_edit_vector.emplace_back(2, ui->serverDaysEdit    , this);
    ssl_edit_vector.emplace_back(2, ui->serverPasswordEdit, this);

    // workstation ...
    ssl_edit_vector.emplace_back(3, ui->pcPathEdit    , this);
    ssl_edit_vector.emplace_back(3, ui->pcNameEdit    , this);
    ssl_edit_vector.emplace_back(3, ui->pcOwnerEdit   , this);
    ssl_edit_vector.emplace_back(3, ui->pcDaysEdit    , this);
    ssl_edit_vector.emplace_back(3, ui->pcPasswordEdit, this);

    // application ...
    ssl_edit_vector.emplace_back(4, ui->pcPathEdit    , this);
    ssl_edit_vector.emplace_back(4, ui->pcNameEdit    , this);
    ssl_edit_vector.emplace_back(4, ui->pcOwnerEdit   , this);
    ssl_edit_vector.emplace_back(4, ui->pcDaysEdit    , this);
    ssl_edit_vector.emplace_back(4, ui->pcPasswordEdit, this);

    // person ...
    ssl_edit_vector.emplace_back(5, ui->pcPathEdit    , this);
    ssl_edit_vector.emplace_back(5, ui->pcNameEdit    , this);
    ssl_edit_vector.emplace_back(5, ui->pcOwnerEdit   , this);
    ssl_edit_vector.emplace_back(5, ui->pcDaysEdit    , this);
    ssl_edit_vector.emplace_back(5, ui->pcPasswordEdit, this);

    //for (int i = 0; i < )

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

    QComboBox * cmb_task = new QComboBox(this);
    QComboBox * cmb_date = new QComboBox(this);

    cmb_task->addItem("Item 1", "value1");
    cmb_task->addItem("Item 2", "value2");
    cmb_task->addItem("Item 3", "value3");

    QFont font;
    font.setBold(true);
    cmb_date->setFont(font);
    cmb_date->addItem("2020 - 06 - 02", "till");
    cmb_date->addItem("2019 - 01 - 01", "from");


    QTreeWidgetItem * treeItem = new QTreeWidgetItem(ui->treeWidget);

    treeItem->setIcon(0,QIcon(":/img/icon-folder.png"));
    treeItem->setText(0,"A");
    treeItem->setText(1,"B");
    treeItem->setText(2,"C");
    treeItem->setText(3,"D");

    ui->treeWidget->setItemWidget(treeItem, 2, cmb_date);
    ui->treeWidget->setItemWidget(treeItem, 3, cmb_task);
}

MySSLToolMode::~MySSLToolMode()
{
    delete ui;
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
    if (pro->exitCode() == 1) {
        delete pro;
        return true;
    }   else
    if (pro->exitCode()  > 1) {
        QString m_text   =
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

void MySSLToolMode::msgbox(QString msg)
{
    QMessageBox::warning(window(),
    "Warning",
    QString("%1 Field is not filled in.\n"
    "Operation aborted.").arg(msg));
}

void MySSLToolMode::on_addNewCA_clicked()
{
    int  count = 0;
    QDir dir;

    // ~/home/<user>/.rnd is need by openssl
    QProcess * touch_rnd = new QProcess;
    touch_rnd->start(QString("touch %1/.rnd").arg(QDir::homePath()));
    touch_rnd->waitForFinished();
    delete touch_rnd;

    if (ui->pathEdit->text().trimmed().length() < 1) { msgbox("Path"); return; }

    // only one ca per client ...
    for (auto item : ui->certsTree->findItems(
        QString("CA - %1")
        .arg(ui->domainEdit->text()
        .trimmed()),Qt::MatchContains)) {
        Q_UNUSED(item);
        ++count;
    }
    if (count > 1) {
        QMessageBox::warning(window(),tr("Error"),
        tr("CA-Root already exists.\n"
           "Please choose an other name."));
        return;
    }

    // all fields ok? ...
    if (ui->domainEdit  ->text().trimmed().length() < 1) { msgbox("Domain"  ); return; }
    if (ui->ownerEdit   ->text().trimmed().length() < 1) { msgbox("Owner"   ); return; }
    if (ui->daysEdit    ->text().trimmed().length() < 1) { msgbox("CA-Days" ); return; }
    if (ui->passwordEdit->text().trimmed().length() < 1) { msgbox("Password"); return; }

    QString tmp_path = QString("%1/%2")
    .arg(ui->pathEdit  ->text().trimmed())
    .arg(ui->domainEdit->text().trimmed());

    // ca root folder ...
    if (!dir.exists(tmp_path)) {
        if (!dir.mkpath(tmp_path)) {
            QMessageBox::warning(window(),
            tr("Error"),
            tr("ca-root folder could not be created."));
            return;
        }
    }

    QString ca_key_pem = QString("%1/ca.key.pem").arg(tmp_path);
    QString ca_crt_pem = QString("%1/ca.crt.pem").arg(tmp_path);
    QString ca_keypass =
    QString("pass:%1")
    .arg(ui->passwordEdit->text().trimmed());

    // openssl CA private key ...
    QString m_ca_root =
    QString("openssl genrsa -aes256 -out %1 -passout %2 2048")
            .arg(ca_key_pem)
            .arg(ca_keypass);

    if (!write_cert(m_ca_root)) return;
    qDebug() << "out key";

    // CA root cert ...
    QString m_ca_cert = QString(
        "openssl req -x509 -new -nodes -extensions v3_ca "
        "-key %1 -out %2 -sha512 -passin %3 -days %4 "
        "-subj \"/C=%5/ST=%6/L=%7/O=%8/OU=%9/CN=%10\"")
        .arg(ca_key_pem)
        .arg(ca_crt_pem)
        .arg(ca_keypass)
        .arg(ui->daysEdit    ->text().trimmed())
        .arg(ui->serverCEdit ->text().trimmed())
        .arg(ui->serverSTEdit->text().trimmed())
        .arg(ui->serverLEdit ->text().trimmed())
        .arg(ui->serverOEdit ->text().trimmed())
        .arg(ui->serverOUEdit->text().trimmed())
        .arg(ui->serverCNEdit->text().trimmed());

    if (!write_cert(m_ca_cert)) return;

    // sign server cert ...
    if (!dir.exists(QString("%1/%2/server/%3")
        .arg(ui->pathEdit       ->text().trimmed())
        .arg(ui->domainEdit     ->text().trimmed())
        .arg(ui->serverOwnerEdit->text().trimmed()))) {
        if (!dir.mkpath(QString("%1/%2/server/%3")
            .arg(ui->pathEdit       ->text().trimmed())
            .arg(ui->domainEdit     ->text().trimmed())
            .arg(ui->serverOwnerEdit->text().trimmed()))) {
            QMessageBox::warning(window(),
            tr("Error"),
            tr("could not create server folder structure."));
            return;
        }
    }

    QString m_sv_cert =
    QString("openssl genrsa -out %1/%2/server/%3/server.key.pem "
            "-passout pass:%4 2048")
            .arg(ui->pathEdit  ->text().trimmed())
            .arg(ui->domainEdit->text().trimmed())
            .arg(ui->serverOwnerEdit   ->text().trimmed())
            .arg(ui->serverPasswordEdit->text().trimmed());

    if (!write_cert(m_sv_cert)) return;
    qDebug() << "pppoop";

    QString m_rq_cert =
    QString("openssl req -new -key %1/%2/server/%3/server.key.pem "
            "-passin pass:$4  -out %1/%2/server/%3/server.req.crt "
            "-subj \"/C=%5/ST=%6/L=%7/O=%8/OU=%9/CN=%10\" -sha512")
            .arg(ui->pathEdit          ->text().trimmed())
            .arg(ui->domainEdit        ->text().trimmed())
            .arg(ui->serverOwnerEdit   ->text().trimmed())
            .arg(ui->serverPasswordEdit->text().trimmed())
            .arg(ui->serverCEdit       ->text().trimmed())
            .arg(ui->serverSTEdit      ->text().trimmed())
            .arg(ui->serverLEdit       ->text().trimmed())
            .arg(ui->serverOEdit       ->text().trimmed())
            .arg(ui->serverOUEdit      ->text().trimmed())
            .arg(ui->serverCNEdit      ->text().trimmed());

    if (!write_cert(m_rq_cert)) return;

    QMessageBox::information(0,
    tr("Attention !!!"),
    tr("CA-Root key: success.\n"
       "CA-ROOT crt: success.\n"
       "Server  key: success.\n"
       "Server  crt: success.\n"
       "Server  req: success.\n"
       "Please keep secret your CA-key !!!"));

    QTreeWidgetItem * m_aitem = new QTreeWidgetItem();
    QTreeWidgetItem * m_ritem = new QTreeWidgetItem();
    QTreeWidgetItem * m_kitem = new QTreeWidgetItem();
    QTreeWidgetItem * m_citem = new QTreeWidgetItem();

    m_aitem->setText(0,QString("CA - %1").arg(ui->domainEdit->text().trimmed()));
    m_ritem->setText(0,QString("root"));
    m_kitem->setText(0,QString("key.pem"));
    m_citem->setText(0,QString("crt.pem"));

    m_aitem->addChild(m_ritem);
    m_ritem->addChild(m_kitem);
    m_ritem->addChild(m_citem);


    QTreeWidgetItem * m_item1 = new QTreeWidgetItem();
    QTreeWidgetItem * m_item2 = new QTreeWidgetItem();
    QTreeWidgetItem * m_item3 = new QTreeWidgetItem();
    QTreeWidgetItem * m_item4 = new QTreeWidgetItem();

    m_item1->setText(0,QString("server"));
    m_item2->setText(0,QString("key.pem"));
    m_item3->setText(0,QString("crt.pem"));
    m_item4->setText(0,QString("req.crt"));

    m_ritem->addChild(m_item1);
    m_item1->addChild(m_item2);
    m_item1->addChild(m_item3);
    m_item1->addChild(m_item4);


    QTreeWidgetItem * m_itemW0 = new QTreeWidgetItem();
    QTreeWidgetItem * m_itemW1 = new QTreeWidgetItem();
    QTreeWidgetItem * m_itemW2 = new QTreeWidgetItem();

    m_itemW0->setText(0,QString("workstation"));
    m_itemW1->setText(0,QString("application"));
    m_itemW2->setText(0,QString("person"));

    m_item1 ->addChild(m_itemW0);
    m_itemW0->addChild(m_itemW1);
    m_itemW1->addChild(m_itemW2);

    ui->certsTree->insertTopLevelItem(0,m_aitem);
}

void MySSLToolMode::pathEditTextChanged(const QString &arg1, QLineEdit * pathEdit)
{
    QString m_str = arg1;
    if (m_str.trimmed().length() < 2) {
        m_str = QString("/tmp");
        pathEdit->setText(m_str);
    }

    QFileInfo inf(m_str);
    if ((!inf.isWritable() && !inf.isReadable() && !inf.isDir())) {
        ui->textBrowser->document()->setHtml(
        "<p><span style='color:#a40000;'><b><i>Path could not be found.</i></b></span></p>\n"
        "<p>Make sure that the directory is write able, and not a existing file.</p>");
        pathEdit->setStyleSheet(
        "background-color: qlineargradient(spread:pad, "
        "x1:1, y1:0.506, x2:1, y2:0, stop:0 rgba(241, 26, 26, "
        "241), stop:1 rgba(255, 255, 255, 255));"
        "color:rgb(255,255,0);font-weight:bold;");
        return;
    }

    pathEdit->setStyleSheet(
    ":hover {background-color: qlineargradient(spread:pad, "
    "x1:1, y1:0.721591, x2:1, y2:0, stop:0 rgba(0, 255, 0, "
    "237), stop:1 rgba(255, 255, 255, 255));}");
}

void MySSLToolMode::on_pathEdit_textChanged      (const QString &arg1) { pathEditTextChanged(arg1,ui->pathEdit   ); }
void MySSLToolMode::on_serverPathEdit_textChanged(const QString &arg1) { pathEditTextChanged(arg1,ui->serverPathEdit); }
void MySSLToolMode::on_pcPathEdit_textChanged    (const QString &arg1) { pathEditTextChanged(arg1,ui->pcPathEdit ); }
void MySSLToolMode::on_appPathEdit_textChanged   (const QString &arg1) { pathEditTextChanged(arg1,ui->appPathEdit); }
void MySSLToolMode::on_humPathEdit_textChanged   (const QString &arg1) { pathEditTextChanged(arg1,ui->humPathEdit); }

QString MySSLToolMode::openPath()
{
    QMessageBox::warning(window(),tr("Warning"),
    tr("Changing the folder path can be crash application,\n"
       "or data can not be place successfully !"));
    //
    QString dir = QFileDialog::getExistingDirectory(
        this, tr("Open Directory"),
        QDir::homePath(),
        QFileDialog::ShowDirsOnly |
        QFileDialog::DontResolveSymlinks);

    if (dir.trimmed().length() < 2)
        dir = "/tmp";
    return dir;
}

void MySSLToolMode::on_openPath1_clicked() { ui->pathEdit      ->setText(openPath()); }
void MySSLToolMode::on_openPath2_clicked() { ui->serverPathEdit->setText(openPath()); }
void MySSLToolMode::on_openPath3_clicked() { ui->pcPathEdit    ->setText(openPath()); }
void MySSLToolMode::on_openPath4_clicked() { ui->appPathEdit   ->setText(openPath()); }
void MySSLToolMode::on_openPath5_clicked() { ui->humPathEdit   ->setText(openPath()); }

void MySSLToolMode::on_delCA_clicked()
{
    QTreeWidgetItem * m_aitem = ui->certsTree->currentItem();
    if ((m_aitem == nullptr)
    ||  (!m_aitem->text(0).startsWith("CA"))) {
        QMessageBox::warning(window(),
        tr("Warning"),
        tr("No CA is selected."));
        return;
    }
    ui->certsTree->removeItemWidget(m_aitem,0);
}

static void msgError(int flag)
{
    if (flag == 1)
    QMessageBox::warning(0,"Error","key file 0 byte error."); else
    QMessageBox::warning(0,"Error","crt file 0 byte error.");
}

void MySSLToolMode::on_importBtn_clicked()
{
    int idx = ui->tabWidget->currentIndex();
    switch (idx) {
    case 0:
        QNetworkProxyFactory::setUseSystemConfiguration(true);

        QMessageBox::information(window(),
        tr("Information"),
        tr("Please select a folder with ca certificates."));
        //
        QString dir = QFileDialog::getExistingDirectory(
            this, tr("Open Directory"),
            QDir::homePath(),
            QFileDialog::ShowDirsOnly |
            QFileDialog::DontResolveSymlinks);

        if (dir.trimmed().length() < 2)
            dir = "/tmp";

        // ca.key certs ...
        QFileInfo fkey(QString("%1/ca.key.pem").arg(dir));
        QFileInfo fcrt(QString("%1/ca.crt.pem").arg(dir));

        if (!fkey.exists()) { QMessageBox::warning(window(),tr("Error"),tr("ca.key.pem not found.")); return; }
        if (!fcrt.exists()) { QMessageBox::warning(window(),tr("Error"),tr("ca.crt.pem not found.")); return; }

        QFile keyFile(QString("%1/ca.key.pem").arg(dir));
        QFile crtFile(QString("%1/ca.crt.pem").arg(dir));

        if (!keyFile.open(QIODevice::ReadOnly)) { QMessageBox::warning(window(),tr("ERROR"),tr("ca.key.pem not found.")); return; }
        if (!crtFile.open(QIODevice::ReadOnly)) { QMessageBox::warning(window(),tr("ERROR"),tr("ca.crt.pem not found.")); return; }

        const QByteArray keyBytes = keyFile.readAll();
        const QByteArray crtBytes = crtFile.readAll();

        if (keyBytes.trimmed().length() < 2) { msgError(1); return; }
        if (crtBytes.trimmed().length() < 2) { msgError(2); return; }

        QSslCertificate keyCert(keyBytes);
        QByteArray pass = "test";
        QSslKey privateKey(keyBytes,QSsl::Rsa,QSsl::Pem,QSsl::PrivateKey, pass);
        if (privateKey.isNull()) {
            QMessageBox::warning(window(),
            tr("Error"),
            tr("private key error."));
            return;
        }   else {
            QMessageBox::warning(window(),
            tr("info"),
            tr("private key ok"));
        }


        QSslCertificate crtCert(crtBytes);
        QByteArray cass = "test";
        QSslKey privateCrt(crtBytes,QSsl::Rsa,QSsl::Pem,QSsl::PublicKey, cass);
        if (privateCrt.isNull()) {
            QMessageBox::warning(window(),
            tr("Error"),
            tr("private crt key error."));
            return;
        }   else {
            QMessageBox::warning(window(),
            tr("info"),
            tr("private crt key ok"));
        }

        QSslConfiguration sslConfiguration;
        sslConfiguration.setPrivateKey(privateKey);
        sslConfiguration.setLocalCertificate(keyCert);
        sslConfiguration.setProtocol(QSsl::TlsV1_0);

        qDebug() << "Test CA-List:";
        qDebug() << keyCert;


        sslConfiguration.setPrivateKey(privateCrt);
        sslConfiguration.setLocalCertificate(crtCert);
        sslConfiguration.setProtocol(QSsl::TlsV1_0);

        qDebug() << "Test CA-crt-List:";
        qDebug() << crtCert;
        qDebug() << "=====";


        // ca certs ...
        QStringList crtinfo;
        crtinfo  << crtCert.subjectInfo(QSslCertificate::CountryName);
        qDebug() << "--->>";
        qDebug() << crtinfo;
        qDebug() << "<<---";
        qDebug() << crtCert.subjectInfo(QSslCertificate::CountryName);
        qDebug() << "oooooooo";


        keyFile.close();
        crtFile.close();


        // fake test ...
        QNetworkAccessManager networkAccessManager;
        QNetworkRequest       networkRequest(QUrl("https://www.google.com/"));
        QNetworkReply *       networkReply
        = networkAccessManager.get(networkRequest);

        QEventLoop loop;
        QObject::connect(
            &networkAccessManager,
            &QNetworkAccessManager::finished,
            &loop,
            &QEventLoop::quit);
        loop.exec();

        if (networkReply->error() > 0) {
            QMessageBox::information(window(),tr("info"),
            QString("code: %1\nerror: %2")
            .arg(networkReply->error())
            .arg(networkReply->errorString()));
            delete networkReply;
            return;
        }

        delete networkReply;
        break;
    }
}
