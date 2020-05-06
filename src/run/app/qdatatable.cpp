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
#include "qdatatable.h"

#include <QTableWidget>

#include <QMouseEvent>
#include <QPainter>
#include <QMessageBox>
#include <QVBoxLayout>

QDataTable::QDataTable(QWidget *parent)
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
    Q_UNUSED(event)
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
