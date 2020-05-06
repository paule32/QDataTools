/********************************************************************************
** Form generated from reading UI file 'mypaypalbuttonwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPAYPALBUTTONWIZARD_H
#define UI_MYPAYPALBUTTONWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWizard>

QT_BEGIN_NAMESPACE

class Ui_MyPayPalButtonWizard
{
public:

    void setupUi(QWizard *MyPayPalButtonWizard)
    {
        if (MyPayPalButtonWizard->objectName().isEmpty())
            MyPayPalButtonWizard->setObjectName(QString::fromUtf8("MyPayPalButtonWizard"));
        MyPayPalButtonWizard->resize(400, 300);

        retranslateUi(MyPayPalButtonWizard);

        QMetaObject::connectSlotsByName(MyPayPalButtonWizard);
    } // setupUi

    void retranslateUi(QWizard *MyPayPalButtonWizard)
    {
        MyPayPalButtonWizard->setWindowTitle(QCoreApplication::translate("MyPayPalButtonWizard", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyPayPalButtonWizard: public Ui_MyPayPalButtonWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPAYPALBUTTONWIZARD_H
