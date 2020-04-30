#include "qdatatimer.h"

QDataTimer::QDataTimer(QWidget *parent) :
    QWidget(parent)
{
}

QSize QDataTimer::minimumSizeHint() const { return QSize(width(),height()); }
QSize QDataTimer::sizeHint()        const { return QSize(width(),height()); }

void QDataTimer::resizeEvent(QResizeEvent *event) {
    Q_UNUSED(event)
//    _widget->resize(width(),height());
}

void QDataTimer::setState(const QString &newState)
{
    Q_UNUSED(newState)
    update();
}

QString QDataTimer::state() const
{
    return QString("myState");
}

void QDataTimer::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
    update();
}

void QDataTimer::paintEvent(QPaintEvent * event)
{
    Q_UNUSED(event)
    QWidget::paintEvent(event);
}
