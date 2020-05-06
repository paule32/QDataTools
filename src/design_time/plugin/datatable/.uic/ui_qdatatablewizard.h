/********************************************************************************
** Form generated from reading UI file 'qdatatablewizard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDATATABLEWIZARD_H
#define UI_QDATATABLEWIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>
#include <mysqlbuilder.h>
#include "qdatatimer.h"

QT_BEGIN_NAMESPACE

class Ui_QDataTableWizard
{
public:
    QWizardPage *wizardPage;
    QWidget *widget_5;
    QTextEdit *textEdit;
    QToolButton *donateButton;
    QWidget *widget_6;
    QLabel *label_6;
    QWizardPage *wizardPage1;
    QWidget *widget;
    QLabel *label;
    QLabel *label_9;
    QWidget *widget_2;
    QComboBox *connectorName;
    QLabel *label_2;
    QLineEdit *serverHost;
    QLineEdit *userName;
    QLineEdit *userPass;
    QLabel *label_3;
    QLabel *label_4;
    QCommandLinkButton *connectButton;
    QProgressBar *progressBar;
    QLabel *dataLabel;
    QDataTimer *dataTimer;
    QWizardPage *wizardPage2;
    QWidget *widget_3;
    QLabel *label_5;
    QLabel *label_10;
    QWidget *widget_4;
    QLabel *label_7;
    QListWidget *dbListWidget;
    QCommandLinkButton *refreshButton;
    QListWidget *tableListWidget;
    QLabel *label_8;
    QCommandLinkButton *cmdButtonAddTable;
    QCommandLinkButton *cmdButtonDelTable;
    QCommandLinkButton *cmdButtonAddDB;
    QWizardPage *wizardPage_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_16;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_13;
    QListWidget *tableListWidget_2;
    QListWidget *tableListWidget_3;
    QCommandLinkButton *commandLinkButton_5;
    QCommandLinkButton *commandLinkButton_6;
    QLabel *label_15;
    QWidget *tab_2;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_14;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_4;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    MySqlBuilder *widget_17;
    QWizardPage *wizardPage_3;
    QWidget *widget_10;
    QLabel *label_16;
    QLabel *label_17;
    QWidget *widget_11;
    QWidget *widget_12;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTableWidget *tableWidget_2;
    QWidget *tab_5;
    QTableWidget *tableWidget_3;
    QWizardPage *wizardPage_4;
    QWidget *widget_13;
    QWidget *widget_14;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QTabWidget *tabWidget_4;
    QWidget *tab_8;
    QPlainTextEdit *plainTextEdit_4;
    QCommandLinkButton *commandLinkButton_7;
    QWidget *tab_9;
    QPlainTextEdit *plainTextEdit_3;
    QCommandLinkButton *commandLinkButton_8;
    QWidget *tab_10;
    QPlainTextEdit *plainTextEdit_5;
    QCommandLinkButton *commandLinkButton_9;
    QWidget *tab_7;
    QWidget *widget_15;
    QLabel *label_18;
    QLabel *label_19;

    void setupUi(QWizard *QDataTableWizard)
    {
        if (QDataTableWizard->objectName().isEmpty())
            QDataTableWizard->setObjectName(QString::fromUtf8("QDataTableWizard"));
        QDataTableWizard->resize(571, 424);
        QDataTableWizard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border:0px;"));
        wizardPage = new QWizardPage();
        wizardPage->setObjectName(QString::fromUtf8("wizardPage"));
        widget_5 = new QWidget(wizardPage);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(0, 52, 471, 251));
        widget_5->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        textEdit = new QTextEdit(widget_5);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 441, 221));
        textEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:0px;"));
        donateButton = new QToolButton(widget_5);
        donateButton->setObjectName(QString::fromUtf8("donateButton"));
        donateButton->setGeometry(QRect(360, 10, 101, 51));
        donateButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/btn_donateCC_LG.png"), QSize(), QIcon::Normal, QIcon::On);
        donateButton->setIcon(icon);
        donateButton->setIconSize(QSize(120, 120));
        widget_6 = new QWidget(wizardPage);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(0, 2, 471, 41));
        widget_6->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 351, 21));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        QDataTableWizard->addPage(wizardPage);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        wizardPage1->setStyleSheet(QString::fromUtf8("border:0px;"));
        widget = new QWidget(wizardPage1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 2, 471, 41));
        widget->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 151, 21));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 10, 151, 21));
        label_9->setFont(font);
        label_9->setLayoutDirection(Qt::RightToLeft);
        label_9->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget_2 = new QWidget(wizardPage1);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 52, 471, 251));
        widget_2->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        connectorName = new QComboBox(widget_2);
        connectorName->addItem(QString());
        connectorName->addItem(QString());
        connectorName->addItem(QString());
        connectorName->setObjectName(QString::fromUtf8("connectorName"));
        connectorName->setGeometry(QRect(10, 30, 141, 24));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 171, 16));
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(250, 250, 250,0);\n"
"border:0px;"));
        serverHost = new QLineEdit(widget_2);
        serverHost->setObjectName(QString::fromUtf8("serverHost"));
        serverHost->setGeometry(QRect(180, 30, 251, 24));
        userName = new QLineEdit(widget_2);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(180, 90, 151, 24));
        userPass = new QLineEdit(widget_2);
        userPass->setObjectName(QString::fromUtf8("userPass"));
        userPass->setGeometry(QRect(180, 120, 151, 24));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 10, 81, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(250, 250, 250,0);\n"
"border:0px;"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 70, 111, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(238, 238, 236,0);\n"
"border:0px;"));
        connectButton = new QCommandLinkButton(widget_2);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(180, 170, 101, 31));
        progressBar = new QProgressBar(widget_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(10, 173, 141, 23));
        QPalette palette;
        QLinearGradient gradient(1, 1, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(136, 138, 133, 255));
        gradient.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QLinearGradient gradient1(1, 1, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(136, 138, 133, 255));
        gradient1.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QLinearGradient gradient2(1, 1, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(136, 138, 133, 255));
        gradient2.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush3(QColor(193, 125, 17, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        QLinearGradient gradient3(1, 1, 1, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(136, 138, 133, 255));
        gradient3.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        QLinearGradient gradient4(1, 1, 1, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(136, 138, 133, 255));
        gradient4.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QLinearGradient gradient5(1, 1, 1, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(136, 138, 133, 255));
        gradient5.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        QLinearGradient gradient6(1, 1, 1, 0);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(136, 138, 133, 255));
        gradient6.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush7(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        QLinearGradient gradient7(1, 1, 1, 0);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(136, 138, 133, 255));
        gradient7.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush8(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        QLinearGradient gradient8(1, 1, 1, 0);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(136, 138, 133, 255));
        gradient8.setColorAt(1, QColor(255, 255, 255, 255));
        QBrush brush9(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        QBrush brush10(QColor(145, 145, 145, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush10);
        progressBar->setPalette(palette);
        progressBar->setValue(24);
        progressBar->setInvertedAppearance(false);
        dataLabel = new QLabel(widget_2);
        dataLabel->setObjectName(QString::fromUtf8("dataLabel"));
        dataLabel->setGeometry(QRect(80, 160, 51, 51));
        dataLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/icon_dbok2.png")));
        dataLabel->setScaledContents(true);
        dataTimer = new QDataTimer(widget_2);
        dataTimer->setObjectName(QString::fromUtf8("dataTimer"));
        dataTimer->setGeometry(QRect(340, 160, 42, 42));
        QDataTableWizard->addPage(wizardPage1);
        wizardPage2 = new QWizardPage();
        wizardPage2->setObjectName(QString::fromUtf8("wizardPage2"));
        widget_3 = new QWidget(wizardPage2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, 2, 471, 41));
        widget_3->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 251, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        label_10 = new QLabel(widget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(300, 10, 151, 21));
        label_10->setFont(font);
        label_10->setLayoutDirection(Qt::RightToLeft);
        label_10->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget_4 = new QWidget(wizardPage2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(0, 52, 471, 251));
        widget_4->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));\n"
""));
        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 141, 21));
        dbListWidget = new QListWidget(widget_4);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(dbListWidget);
        __qlistwidgetitem->setCheckState(Qt::Unchecked);
        __qlistwidgetitem->setFont(font1);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(dbListWidget);
        __qlistwidgetitem1->setCheckState(Qt::Unchecked);
        __qlistwidgetitem1->setFont(font2);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(dbListWidget);
        __qlistwidgetitem2->setCheckState(Qt::Unchecked);
        __qlistwidgetitem2->setFont(font2);
        dbListWidget->setObjectName(QString::fromUtf8("dbListWidget"));
        dbListWidget->setGeometry(QRect(10, 40, 141, 161));
        dbListWidget->setStyleSheet(QString::fromUtf8("QListWidget::item:selected {\n"
"background-color:cyan;\n"
"border:0px;\n"
"}\n"
"QListWidget::item:hover {\n"
"background-color:cyan;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked {\n"
"background-color: rgb(200,200,100);\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:active {\n"
"background-color:red;\n"
"border-radius: 6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked:hover {\n"
"background-color: yellow;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked:pressed {\n"
"background-color:red;\n"
"border-radius: 6px;\n"
"border:0px;\n"
"}\n"
"\n"
"QListWidget::indicator:checked {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:hover {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:pressed {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:indeterminate:ho"
                        "ver {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:indeterminate:pressed {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
""));
        refreshButton = new QCommandLinkButton(widget_4);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(10, 210, 191, 31));
        tableListWidget = new QListWidget(widget_4);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(tableListWidget);
        __qlistwidgetitem3->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(tableListWidget);
        __qlistwidgetitem4->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(tableListWidget);
        __qlistwidgetitem5->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(tableListWidget);
        __qlistwidgetitem6->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(tableListWidget);
        __qlistwidgetitem7->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(tableListWidget);
        __qlistwidgetitem8->setCheckState(Qt::Unchecked);
        tableListWidget->setObjectName(QString::fromUtf8("tableListWidget"));
        tableListWidget->setGeometry(QRect(170, 40, 161, 161));
        tableListWidget->setFont(font2);
        tableListWidget->setStyleSheet(QString::fromUtf8("QListWidget::item:selected {\n"
"background-color:cyan;\n"
"border:0px;\n"
"}\n"
"QListWidget::item:hover {\n"
"background-color:cyan;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked {\n"
"background-color: rgb(200,200,100);\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:active {\n"
"background-color:red;\n"
"border-radius: 6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked:hover {\n"
"background-color: yellow;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked:pressed {\n"
"background-color:red;\n"
"border-radius: 6px;\n"
"border:0px;\n"
"}\n"
"\n"
"QListWidget::indicator:checked {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:hover {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:pressed {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:indeterminate:ho"
                        "ver {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:indeterminate:pressed {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
""));
        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 10, 161, 20));
        cmdButtonAddTable = new QCommandLinkButton(widget_4);
        cmdButtonAddTable->setObjectName(QString::fromUtf8("cmdButtonAddTable"));
        cmdButtonAddTable->setGeometry(QRect(340, 40, 121, 31));
        cmdButtonDelTable = new QCommandLinkButton(widget_4);
        cmdButtonDelTable->setObjectName(QString::fromUtf8("cmdButtonDelTable"));
        cmdButtonDelTable->setGeometry(QRect(340, 80, 121, 31));
        cmdButtonAddDB = new QCommandLinkButton(widget_4);
        cmdButtonAddDB->setObjectName(QString::fromUtf8("cmdButtonAddDB"));
        cmdButtonAddDB->setGeometry(QRect(340, 170, 121, 31));
        QDataTableWizard->addPage(wizardPage2);
        wizardPage_2 = new QWizardPage();
        wizardPage_2->setObjectName(QString::fromUtf8("wizardPage_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wizardPage_2->sizePolicy().hasHeightForWidth());
        wizardPage_2->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(wizardPage_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_16 = new QWidget(wizardPage_2);
        widget_16->setObjectName(QString::fromUtf8("widget_16"));
        sizePolicy.setHeightForWidth(widget_16->sizePolicy().hasHeightForWidth());
        widget_16->setSizePolicy(sizePolicy);
        widget_16->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(widget_16);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        widget_7 = new QWidget(widget_16);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        sizePolicy.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy);
        widget_7->setMaximumSize(QSize(16777215, 42));
        widget_7->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_20 = new QLabel(widget_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);
        label_20->setLayoutDirection(Qt::RightToLeft);
        label_20->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_20);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_12 = new QLabel(widget_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setLayoutDirection(Qt::RightToLeft);
        label_12->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_12);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(widget_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_8 = new QWidget(widget_16);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));\n"
""));
        horizontalLayout_2 = new QHBoxLayout(widget_8);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, -1, -1, -1);
        widget_9 = new QWidget(widget_8);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setStyleSheet(QString::fromUtf8("border:0px;"));
        horizontalLayout_3 = new QHBoxLayout(widget_9);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(1, 1, 1, 1);
        tabWidget = new QTabWidget(widget_9);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"}\n"
"\n"
"Q"
                        "TabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 0, 81, 21));
        label_13->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        tableListWidget_2 = new QListWidget(tab);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(tableListWidget_2);
        __qlistwidgetitem9->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(tableListWidget_2);
        __qlistwidgetitem10->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(tableListWidget_2);
        __qlistwidgetitem11->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem12 = new QListWidgetItem(tableListWidget_2);
        __qlistwidgetitem12->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem13 = new QListWidgetItem(tableListWidget_2);
        __qlistwidgetitem13->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem14 = new QListWidgetItem(tableListWidget_2);
        __qlistwidgetitem14->setCheckState(Qt::Unchecked);
        tableListWidget_2->setObjectName(QString::fromUtf8("tableListWidget_2"));
        tableListWidget_2->setGeometry(QRect(10, 25, 151, 161));
        tableListWidget_2->setFont(font2);
        tableListWidget_2->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"border:3px solid black;\n"
"border-rradius:6px;\n"
"}\n"
"QListWidget::item:selected {\n"
"background-color:cyan;\n"
"border:0px;\n"
"}\n"
"QListWidget::item:hover {\n"
"background-color:cyan;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked {\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:active {\n"
"background-color:lime;\n"
"border-radius: 6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked:hover {\n"
"background-color: yellow;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked:pressed {\n"
"background-color:lime;\n"
"border-radius: 6px;\n"
"border:0px;\n"
"}\n"
"\n"
"QListWidget::indicator:checked {\n"
"background-color: lime;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:hover {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:pressed {\n"
"background-color: red;\n"
"bor"
                        "der-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:indeterminate:hover {\n"
"background-color: lime;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:indeterminate:pressed {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
""));
        tableListWidget_3 = new QListWidget(tab);
        QListWidgetItem *__qlistwidgetitem15 = new QListWidgetItem(tableListWidget_3);
        __qlistwidgetitem15->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem16 = new QListWidgetItem(tableListWidget_3);
        __qlistwidgetitem16->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem17 = new QListWidgetItem(tableListWidget_3);
        __qlistwidgetitem17->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem18 = new QListWidgetItem(tableListWidget_3);
        __qlistwidgetitem18->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem19 = new QListWidgetItem(tableListWidget_3);
        __qlistwidgetitem19->setCheckState(Qt::Unchecked);
        QListWidgetItem *__qlistwidgetitem20 = new QListWidgetItem(tableListWidget_3);
        __qlistwidgetitem20->setCheckState(Qt::Unchecked);
        tableListWidget_3->setObjectName(QString::fromUtf8("tableListWidget_3"));
        tableListWidget_3->setGeometry(QRect(290, 27, 151, 161));
        tableListWidget_3->setFont(font2);
        tableListWidget_3->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"border:3px solid black;\n"
"border-rradius:6px;\n"
"}\n"
"QListWidget::item:selected {\n"
"background-color:cyan;\n"
"border:0px;\n"
"}\n"
"QListWidget::item:hover {\n"
"background-color:cyan;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked {\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:active {\n"
"background-color:lime;\n"
"border-radius: 6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked:hover {\n"
"background-color: yellow;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:unchecked:pressed {\n"
"background-color:lime;\n"
"border-radius: 6px;\n"
"border:0px;\n"
"}\n"
"\n"
"QListWidget::indicator:checked {\n"
"background-color: lime;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:hover {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:checked:pressed {\n"
"background-color: red;\n"
"bor"
                        "der-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:indeterminate:hover {\n"
"background-color: lime;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
"QListWidget::indicator:indeterminate:pressed {\n"
"background-color: red;\n"
"border-radius:6px;\n"
"border:0px;\n"
"}\n"
""));
        commandLinkButton_5 = new QCommandLinkButton(tab);
        commandLinkButton_5->setObjectName(QString::fromUtf8("commandLinkButton_5"));
        commandLinkButton_5->setGeometry(QRect(170, 50, 111, 41));
        commandLinkButton_6 = new QCommandLinkButton(tab);
        commandLinkButton_6->setObjectName(QString::fromUtf8("commandLinkButton_6"));
        commandLinkButton_6->setGeometry(QRect(170, 100, 111, 41));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(290, 0, 141, 21));
        label_15->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 24, 231, 121));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:3px solid black;"));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 3, 211, 16));
        label_14->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        commandLinkButton = new QCommandLinkButton(tab_2);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 150, 91, 41));
        commandLinkButton_2 = new QCommandLinkButton(tab_2);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(150, 150, 91, 41));
        commandLinkButton_3 = new QCommandLinkButton(tab_2);
        commandLinkButton_3->setObjectName(QString::fromUtf8("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(260, 20, 168, 31));
        commandLinkButton_4 = new QCommandLinkButton(tab_2);
        commandLinkButton_4->setObjectName(QString::fromUtf8("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(260, 60, 168, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_17 = new MySqlBuilder(tab_3);
        widget_17->setObjectName(QString::fromUtf8("widget_17"));

        verticalLayout_3->addWidget(widget_17);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout_3->addWidget(tabWidget);


        horizontalLayout_2->addWidget(widget_9);


        verticalLayout_2->addWidget(widget_8);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout);


        horizontalLayout->addWidget(widget_16);

        QDataTableWizard->addPage(wizardPage_2);
        wizardPage_3 = new QWizardPage();
        wizardPage_3->setObjectName(QString::fromUtf8("wizardPage_3"));
        widget_10 = new QWidget(wizardPage_3);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setGeometry(QRect(0, 2, 471, 41));
        widget_10->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_16 = new QLabel(widget_10);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 10, 151, 21));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        label_17 = new QLabel(widget_10);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(300, 10, 151, 21));
        label_17->setFont(font);
        label_17->setLayoutDirection(Qt::RightToLeft);
        label_17->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget_11 = new QWidget(wizardPage_3);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(0, 52, 471, 251));
        widget_11->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        widget_12 = new QWidget(widget_11);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(10, 9, 450, 231));
        widget_12->setStyleSheet(QString::fromUtf8("border:0px;"));
        tabWidget_2 = new QTabWidget(widget_12);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 451, 231));
        tabWidget_2->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"}\n"
"\n"
"Q"
                        "TabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableWidget_2 = new QTableWidget(tab_4);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget_2->rowCount() < 2)
            tableWidget_2->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem3);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(5, 10, 441, 191));
        tableWidget_2->setStyleSheet(QString::fromUtf8("background-color:white;"));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tableWidget_3 = new QTableWidget(tab_5);
        if (tableWidget_3->columnCount() < 5)
            tableWidget_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        if (tableWidget_3->rowCount() < 3)
            tableWidget_3->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_3->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_3->setItem(1, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_3->setItem(1, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_3->setItem(2, 0, __qtablewidgetitem19);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(0, 11, 431, 181));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        tableWidget_3->setFont(font3);
        tableWidget_3->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(100, 167, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    color: black;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"font-weight:bold;\n"
"font-size:11pt;\n"
"}"));
        tableWidget_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget_3->setColumnCount(5);
        tableWidget_3->horizontalHeader()->setMinimumSectionSize(84);
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget_3->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_3->verticalHeader()->setVisible(false);
        tabWidget_2->addTab(tab_5, QString());
        QDataTableWizard->addPage(wizardPage_3);
        wizardPage_4 = new QWizardPage();
        wizardPage_4->setObjectName(QString::fromUtf8("wizardPage_4"));
        widget_13 = new QWidget(wizardPage_4);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(0, 52, 471, 251));
        widget_13->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        widget_14 = new QWidget(widget_13);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setGeometry(QRect(10, 9, 450, 231));
        widget_14->setStyleSheet(QString::fromUtf8("border:0px;"));
        tabWidget_3 = new QTabWidget(widget_14);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 2, 451, 231));
        tabWidget_3->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"}\n"
"\n"
"Q"
                        "TabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}"));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget_4 = new QTabWidget(tab_6);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(10, 10, 431, 181));
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        plainTextEdit_4 = new QPlainTextEdit(tab_8);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(10, 10, 311, 141));
        plainTextEdit_4->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:2px solid black;"));
        plainTextEdit_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        plainTextEdit_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        commandLinkButton_7 = new QCommandLinkButton(tab_8);
        commandLinkButton_7->setObjectName(QString::fromUtf8("commandLinkButton_7"));
        commandLinkButton_7->setGeometry(QRect(330, 10, 91, 31));
        tabWidget_4->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        plainTextEdit_3 = new QPlainTextEdit(tab_9);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(10, 10, 311, 141));
        plainTextEdit_3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:2px solid black;"));
        plainTextEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        plainTextEdit_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        commandLinkButton_8 = new QCommandLinkButton(tab_9);
        commandLinkButton_8->setObjectName(QString::fromUtf8("commandLinkButton_8"));
        commandLinkButton_8->setGeometry(QRect(330, 10, 91, 31));
        tabWidget_4->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        plainTextEdit_5 = new QPlainTextEdit(tab_10);
        plainTextEdit_5->setObjectName(QString::fromUtf8("plainTextEdit_5"));
        plainTextEdit_5->setGeometry(QRect(10, 10, 311, 141));
        plainTextEdit_5->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:2px solid black;"));
        plainTextEdit_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        plainTextEdit_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        commandLinkButton_9 = new QCommandLinkButton(tab_10);
        commandLinkButton_9->setObjectName(QString::fromUtf8("commandLinkButton_9"));
        commandLinkButton_9->setGeometry(QRect(330, 10, 91, 31));
        tabWidget_4->addTab(tab_10, QString());
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget_3->addTab(tab_7, QString());
        widget_15 = new QWidget(wizardPage_4);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setGeometry(QRect(0, 2, 471, 41));
        widget_15->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_18 = new QLabel(widget_15);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 10, 151, 21));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        label_19 = new QLabel(widget_15);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(300, 10, 151, 21));
        label_19->setFont(font);
        label_19->setLayoutDirection(Qt::RightToLeft);
        label_19->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        QDataTableWizard->addPage(wizardPage_4);

        retranslateUi(QDataTableWizard);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QDataTableWizard);
    } // setupUi

    void retranslateUi(QWizard *QDataTableWizard)
    {
        QDataTableWizard->setWindowTitle(QCoreApplication::translate("QDataTableWizard", "Wizard", nullptr));
        textEdit->setHtml(QCoreApplication::translate("QDataTableWizard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Welcome to <span style=\" font-weight:600; text-decoration: underline;\">QDataTools</span> 0.0.1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(c) 2020 by Jens Kallup - kallup.jens@web.de</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">created with Qt Creator 4.12.0 (5.14.2)</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inden"
                        "t:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This Wizard will help you to develop RAPID database Application's.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The Software is licensed under the MIT License.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You should use it only in non-commercial Application's.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\">If You find the Software usefull, please let me know, if you would be Donate.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline; color:#204a87;\">THIS SOFTWARE COMES WITHOUT ANY GUARANTEE !!!</span></p></body></html>", nullptr));
        donateButton->setText(QCoreApplication::translate("QDataTableWizard", "https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=BGAHE9S2NRZNJ&source=url", nullptr));
        label_6->setText(QCoreApplication::translate("QDataTableWizard", "Welcome to QDataTools 0.0.1 (c) 2020 Jens Kallup", nullptr));
        label->setText(QCoreApplication::translate("QDataTableWizard", "Setup - Connector ...", nullptr));
        label_9->setText(QCoreApplication::translate("QDataTableWizard", "Step  1 / 5", nullptr));
        connectorName->setItemText(0, QCoreApplication::translate("QDataTableWizard", "MySQL", nullptr));
        connectorName->setItemText(1, QCoreApplication::translate("QDataTableWizard", "SQLite", nullptr));
        connectorName->setItemText(2, QCoreApplication::translate("QDataTableWizard", "ODBC", nullptr));

        label_2->setText(QCoreApplication::translate("QDataTableWizard", "Please Select Connector:", nullptr));
        serverHost->setText(QCoreApplication::translate("QDataTableWizard", "127.0.0.1", nullptr));
        label_3->setText(QCoreApplication::translate("QDataTableWizard", "Host / Path:", nullptr));
        label_4->setText(QCoreApplication::translate("QDataTableWizard", "User / Password:", nullptr));
        connectButton->setText(QCoreApplication::translate("QDataTableWizard", "Connect", nullptr));
        dataLabel->setText(QString());
        label_5->setText(QCoreApplication::translate("QDataTableWizard", "Select Database / Table(s) ...", nullptr));
        label_10->setText(QCoreApplication::translate("QDataTableWizard", "Step  2 / 5", nullptr));
        label_7->setText(QCoreApplication::translate("QDataTableWizard", "Database's:", nullptr));

        const bool __sortingEnabled = dbListWidget->isSortingEnabled();
        dbListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = dbListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = dbListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = dbListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        dbListWidget->setSortingEnabled(__sortingEnabled);

        refreshButton->setText(QCoreApplication::translate("QDataTableWizard", "Refresh / ReLoad", nullptr));

        const bool __sortingEnabled1 = tableListWidget->isSortingEnabled();
        tableListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem3 = tableListWidget->item(0);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = tableListWidget->item(1);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = tableListWidget->item(2);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = tableListWidget->item(3);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = tableListWidget->item(4);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = tableListWidget->item(5);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        tableListWidget->setSortingEnabled(__sortingEnabled1);

        label_8->setText(QCoreApplication::translate("QDataTableWizard", "Table's:", nullptr));
        cmdButtonAddTable->setText(QCoreApplication::translate("QDataTableWizard", "Add Table", nullptr));
        cmdButtonDelTable->setText(QCoreApplication::translate("QDataTableWizard", "Del Table", nullptr));
        cmdButtonAddDB->setText(QCoreApplication::translate("QDataTableWizard", "Add Database", nullptr));
        label_20->setText(QCoreApplication::translate("QDataTableWizard", "Table / SQL Builder", nullptr));
        label_12->setText(QCoreApplication::translate("QDataTableWizard", "Step  3 / 5", nullptr));
        label_13->setText(QCoreApplication::translate("QDataTableWizard", "Table-Fields:", nullptr));

        const bool __sortingEnabled2 = tableListWidget_2->isSortingEnabled();
        tableListWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem9 = tableListWidget_2->item(0);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = tableListWidget_2->item(1);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = tableListWidget_2->item(2);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = tableListWidget_2->item(3);
        ___qlistwidgetitem12->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = tableListWidget_2->item(4);
        ___qlistwidgetitem13->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = tableListWidget_2->item(5);
        ___qlistwidgetitem14->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        tableListWidget_2->setSortingEnabled(__sortingEnabled2);


        const bool __sortingEnabled3 = tableListWidget_3->isSortingEnabled();
        tableListWidget_3->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem15 = tableListWidget_3->item(0);
        ___qlistwidgetitem15->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = tableListWidget_3->item(1);
        ___qlistwidgetitem16->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = tableListWidget_3->item(2);
        ___qlistwidgetitem17->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = tableListWidget_3->item(3);
        ___qlistwidgetitem18->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem19 = tableListWidget_3->item(4);
        ___qlistwidgetitem19->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = tableListWidget_3->item(5);
        ___qlistwidgetitem20->setText(QCoreApplication::translate("QDataTableWizard", "Neues Element", nullptr));
        tableListWidget_3->setSortingEnabled(__sortingEnabled3);

        commandLinkButton_5->setText(QCoreApplication::translate("QDataTableWizard", "Add", nullptr));
        commandLinkButton_6->setText(QCoreApplication::translate("QDataTableWizard", "Delete", nullptr));
        label_15->setText(QCoreApplication::translate("QDataTableWizard", "Table-Fields to use:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("QDataTableWizard", "Native", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("QDataTableWizard", "SELECT * FROM <table>", nullptr));
        label_14->setText(QCoreApplication::translate("QDataTableWizard", "TypeIn SQL-Query Text:", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("QDataTableWizard", "Execute", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("QDataTableWizard", "Clear", nullptr));
        commandLinkButton_3->setText(QCoreApplication::translate("QDataTableWizard", "Export SQL-Data", nullptr));
        commandLinkButton_4->setText(QCoreApplication::translate("QDataTableWizard", "Import SQL-Data", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("QDataTableWizard", "  SQL-Editor ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("QDataTableWizard", "Builder", nullptr));
        label_16->setText(QCoreApplication::translate("QDataTableWizard", "Table View ...", nullptr));
        label_17->setText(QCoreApplication::translate("QDataTableWizard", "Step  4 / 5", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QDataTableWizard", "HeaderA", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QDataTableWizard", "HeaderB", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QDataTableWizard", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QDataTableWizard", "2", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("QDataTableWizard", "  Table Preview  ", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("QDataTableWizard", "Header", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("QDataTableWizard", "Width", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("QDataTableWizard", "Visible", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("QDataTableWizard", "Background-Color", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("QDataTableWizard", "Caption", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("QDataTableWizard", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("QDataTableWizard", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_3->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("QDataTableWizard", "3", nullptr));

        const bool __sortingEnabled4 = tableWidget_3->isSortingEnabled();
        tableWidget_3->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->item(0, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("QDataTableWizard", "HeaderA", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->item(0, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("QDataTableWizard", "42", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->item(0, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("QDataTableWizard", "true", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->item(0, 3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("QDataTableWizard", "yellow", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_3->item(0, 4);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("QDataTableWizard", "Header1", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_3->item(1, 0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("QDataTableWizard", "HeaderB", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_3->item(1, 1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("QDataTableWizard", "21", nullptr));
        tableWidget_3->setSortingEnabled(__sortingEnabled4);

        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("QDataTableWizard", "  Header's  ", nullptr));
        commandLinkButton_7->setText(QCoreApplication::translate("QDataTableWizard", "Start", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QCoreApplication::translate("QDataTableWizard", "Header", nullptr));
        commandLinkButton_8->setText(QCoreApplication::translate("QDataTableWizard", "Start", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_9), QCoreApplication::translate("QDataTableWizard", "C++", nullptr));
        commandLinkButton_9->setText(QCoreApplication::translate("QDataTableWizard", "Start", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_10), QCoreApplication::translate("QDataTableWizard", " Project .pro", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QCoreApplication::translate("QDataTableWizard", "GNU G++", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QCoreApplication::translate("QDataTableWizard", "  Python", nullptr));
        label_18->setText(QCoreApplication::translate("QDataTableWizard", "Write Source Code ...", nullptr));
        label_19->setText(QCoreApplication::translate("QDataTableWizard", "Step  5 / 5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDataTableWizard: public Ui_QDataTableWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDATATABLEWIZARD_H
