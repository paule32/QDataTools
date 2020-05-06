/********************************************************************************
** Form generated from reading UI file 'qdatatimerwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDATATIMERWIZARD_H
#define UI_QDATATIMERWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_QDataTimerWizard
{
public:
    QWizardPage *wizardPage1;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWizard *QDataTimerWizard)
    {
        if (QDataTimerWizard->objectName().isEmpty())
            QDataTimerWizard->setObjectName(QString::fromUtf8("QDataTimerWizard"));
        QDataTimerWizard->resize(565, 446);
        QDataTimerWizard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border:0px;"));
        wizardPage1 = new QWizardPage();
        wizardPage1->setObjectName(QString::fromUtf8("wizardPage1"));
        verticalLayout_2 = new QVBoxLayout(wizardPage1);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        QDataTimerWizard->addPage(wizardPage1);

        retranslateUi(QDataTimerWizard);

        QMetaObject::connectSlotsByName(QDataTimerWizard);
    } // setupUi

    void retranslateUi(QWizard *QDataTimerWizard)
    {
        QDataTimerWizard->setWindowTitle(QCoreApplication::translate("QDataTimerWizard", "Wizard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDataTimerWizard: public Ui_QDataTimerWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDATATIMERWIZARD_H
