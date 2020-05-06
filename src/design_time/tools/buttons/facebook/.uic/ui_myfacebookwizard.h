/********************************************************************************
** Form generated from reading UI file 'myfacebookwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFACEBOOKWIZARD_H
#define UI_MYFACEBOOKWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_MyFaceBookWizard
{
public:
    QWizardPage *wizardPage;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QWizardPage *wizardPage1;

    void setupUi(QWizard *MyFaceBookWizard)
    {
        if (MyFaceBookWizard->objectName().isEmpty())
            MyFaceBookWizard->setObjectName(QString::fromUtf8("MyFaceBookWizard"));
        MyFaceBookWizard->resize(499, 314);
        MyFaceBookWizard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border:0px;"));
        wizardPage = new QWizardPage();
        wizardPage->setObjectName(QString::fromUtf8("wizardPage"));
        verticalLayout = new QVBoxLayout(wizardPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_6 = new QWidget(wizardPage);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("border-bottom:2px solid rgb(85, 87, 83);\n"
"border-right:2px solid rgb(85, 87, 83);\n"
"border-top:2px solid rgb(32, 74, 135);\n"
"border-left:2px solid rgb(32, 74, 135);\n"
"border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayout_2 = new QVBoxLayout(widget_6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("border:0px solid rgba(0,0,0,0);\n"
"background-color: rgba(238, 238, 236,0);"));

        verticalLayout_2->addWidget(label_6);


        verticalLayout_3->addWidget(widget_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_3);

        MyFaceBookWizard->addPage(wizardPage);
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        wizardPage1->setStyleSheet(QString::fromUtf8("border:0px;"));
        MyFaceBookWizard->addPage(wizardPage1);

        retranslateUi(MyFaceBookWizard);

        QMetaObject::connectSlotsByName(MyFaceBookWizard);
    } // setupUi

    void retranslateUi(QWizard *MyFaceBookWizard)
    {
        MyFaceBookWizard->setWindowTitle(QCoreApplication::translate("MyFaceBookWizard", "Wizard", nullptr));
        label_6->setText(QCoreApplication::translate("MyFaceBookWizard", "Welcome to QDataTools 0.0.1 (c) 2020 Jens Kallup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyFaceBookWizard: public Ui_MyFaceBookWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFACEBOOKWIZARD_H
