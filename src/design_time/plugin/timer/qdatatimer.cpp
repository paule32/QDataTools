// --------------------------------------------------------------------------------
// MIT License
//
// Copyright (c) 2020 Jens Kallup
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// --------------------------------------------------------------------------------
#include "qdatatimer.h"

#include <QMouseEvent>
#include <QPixmap>
#include <QBrush>
#include <QLabel>
#include <QPainter>

QDataTimer::QDataTimer(QWidget *parent) :
    QWidget(parent)
{
    const QPixmap pix(QPixmap(QLatin1String(":/img/icon_clock.png")));
    pix.scaled(42,42);
    resize(42,42);

    _widget = new QLabel(this);
    _widget->setPixmap(pix);
    _widget->setScaledContents(true);
    _widget->move(0,0);
    _widget->resize(42,42);
}

QSize QDataTimer::minimumSizeHint() const { return QSize(width(),height()); }
QSize QDataTimer::sizeHint()        const { return QSize(width(),height()); }

void QDataTimer::resizeEvent(QResizeEvent *event) {
    Q_UNUSED(event)
    _widget->resize(42,42);
             resize(42,42);
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
