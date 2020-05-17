#ifndef MYSSLTOOLMODE_H
#define MYSSLTOOLMODE_H

#include <QWidget>
#include <QTreeWidget>
#include <QTreeWidgetItem>

#include <QStringList>

namespace Ui {
class MySSLToolMode;
}

class MySSLToolMode : public QWidget
{
    Q_OBJECT
public:
    explicit MySSLToolMode(QWidget *parent = nullptr);
    ~MySSLToolMode();

private slots:
    void on_createCert_clicked();
    void on_createCA_clicked();
    void on_certsTree_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

private:
    Ui::MySSLToolMode *ui;
};

#endif // MYSSLTOOLMODE_H
