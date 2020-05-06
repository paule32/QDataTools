/********************************************************************************
** Form generated from reading UI file 'mysqlbuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSQLBUILDER_H
#define UI_MYSQLBUILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MySqlBuilder
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QGraphicsView *graphicsView;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *MySqlBuilder)
    {
        if (MySqlBuilder->objectName().isEmpty())
            MySqlBuilder->setObjectName(QString::fromUtf8("MySqlBuilder"));
        MySqlBuilder->resize(487, 347);
        MySqlBuilder->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(136, 138, 133, 255), stop:1 rgba(255, 255, 255, 255));"));
        horizontalLayout = new QHBoxLayout(MySqlBuilder);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        graphicsView = new QGraphicsView(MySqlBuilder);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMouseTracking(true);
        graphicsView->setStyleSheet(QString::fromUtf8("border:1px solid black;"));
        graphicsView->setDragMode(QGraphicsView::RubberBandDrag);

        verticalLayout_2->addWidget(graphicsView);

        tableWidget = new QTableWidget(MySqlBuilder);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(0, 30));
        tableWidget->setMaximumSize(QSize(16777215, 132));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:1px solid black;"));

        verticalLayout_2->addWidget(tableWidget);


        verticalLayout->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton = new QPushButton(MySqlBuilder);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 0));

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(MySqlBuilder);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pushButton_5 = new QPushButton(MySqlBuilder);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_3->addWidget(pushButton_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton_3 = new QPushButton(MySqlBuilder);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(MySqlBuilder);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_3->addWidget(pushButton_4);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(MySqlBuilder);

        QMetaObject::connectSlotsByName(MySqlBuilder);
    } // setupUi

    void retranslateUi(QWidget *MySqlBuilder)
    {
        MySqlBuilder->setWindowTitle(QCoreApplication::translate("MySqlBuilder", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MySqlBuilder", "Table1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MySqlBuilder", "Table2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MySqlBuilder", "Table3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MySqlBuilder", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MySqlBuilder", "SQL", nullptr));
        pushButton->setText(QCoreApplication::translate("MySqlBuilder", "Open Table", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MySqlBuilder", "Close Table", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MySqlBuilder", "Clear All", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MySqlBuilder", "Export SQL", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MySqlBuilder", "Import SQL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MySqlBuilder: public Ui_MySqlBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSQLBUILDER_H
