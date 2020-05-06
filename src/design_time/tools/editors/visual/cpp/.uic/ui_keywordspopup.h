/********************************************************************************
** Form generated from reading UI file 'keywordspopup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYWORDSPOPUP_H
#define UI_KEYWORDSPOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyWordsPopUp
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *KeyWordsPopUp)
    {
        if (KeyWordsPopUp->objectName().isEmpty())
            KeyWordsPopUp->setObjectName(QString::fromUtf8("KeyWordsPopUp"));
        KeyWordsPopUp->resize(304, 179);
        KeyWordsPopUp->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayout = new QVBoxLayout(KeyWordsPopUp);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(KeyWordsPopUp);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(1, font);
        __qtreewidgetitem->setFont(0, font);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QFont font1;
        font1.setItalic(true);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setFont(0, font);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem2->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem3->setFont(0, font1);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem4->setFont(0, font);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectColumns);
        treeWidget->setRootIsDecorated(false);
        treeWidget->header()->setCascadingSectionResizes(true);
        treeWidget->header()->setDefaultSectionSize(128);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(treeWidget);


        retranslateUi(KeyWordsPopUp);

        QMetaObject::connectSlotsByName(KeyWordsPopUp);
    } // setupUi

    void retranslateUi(QWidget *KeyWordsPopUp)
    {
        KeyWordsPopUp->setWindowTitle(QCoreApplication::translate("KeyWordsPopUp", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("KeyWordsPopUp", "Description", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("KeyWordsPopUp", "Keyword", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("KeyWordsPopUp", "Keywords for GNU C++", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("KeyWordsPopUp", "ISO C++", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("KeyWordsPopUp", "Condition", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("KeyWordsPopUp", "Condition's", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("KeyWordsPopUp", "if else endif", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("KeyWordsPopUp", "switch", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("KeyWordsPopUp", "Loop", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("KeyWordsPopUp", "Loops", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("KeyWordsPopUp", "for", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("KeyWordsPopUp", "while", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem8->setText(1, QCoreApplication::translate("KeyWordsPopUp", "Keywords for Python", nullptr));
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("KeyWordsPopUp", "Python", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class KeyWordsPopUp: public Ui_KeyWordsPopUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYWORDSPOPUP_H
