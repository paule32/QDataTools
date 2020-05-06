/********************************************************************************
** Form generated from reading UI file 'mycodeeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCODEEDITOR_H
#define UI_MYCODEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyCodeEditor
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *textEdit;

    void setupUi(QWidget *MyCodeEditor)
    {
        if (MyCodeEditor->objectName().isEmpty())
            MyCodeEditor->setObjectName(QString::fromUtf8("MyCodeEditor"));
        MyCodeEditor->resize(336, 225);
        MyCodeEditor->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayout = new QVBoxLayout(MyCodeEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QPlainTextEdit(MyCodeEditor);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(MyCodeEditor);

        QMetaObject::connectSlotsByName(MyCodeEditor);
    } // setupUi

    void retranslateUi(QWidget *MyCodeEditor)
    {
        MyCodeEditor->setWindowTitle(QCoreApplication::translate("MyCodeEditor", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyCodeEditor: public Ui_MyCodeEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCODEEDITOR_H
