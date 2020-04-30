#include "qdatatable.h"

#include <QTableWidget>

#include <QMouseEvent>
#include <QPainter>
#include <QMessageBox>
#include <QVBoxLayout>

QDataTable::QDataTable(QWidget *parent, bool flag)
    : QWidget(parent)
{
    _widget = new QTableWidget(this);
    _widget->move(0,0);
    _widget->resize(300,250);
    _widget->setRowCount(2);
    _widget->setColumnCount(2);
    _widget->show();
}

QSize QDataTable::minimumSizeHint() const { return QSize(width(),height()); }
QSize QDataTable::sizeHint()        const { return QSize(width(),height()); }

void QDataTable::resizeEvent(QResizeEvent *event) {
    _widget->resize(width(),height());
}

void QDataTable::setState(const QString &newState)
{
    Q_UNUSED(newState)
    update();
}

QString QDataTable::state() const
{
    return QString("myState");
}

void QDataTable::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
    update();
}

void QDataTable::paintEvent(QPaintEvent * event)
{
    QWidget::paintEvent(event);
}
