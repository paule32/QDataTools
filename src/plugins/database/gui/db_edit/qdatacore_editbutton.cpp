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
#include "qdatacore_editbutton.h"

#include <QTableWidget>

#include <QMouseEvent>
#include <QPainter>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QCommandLinkButton>

QDataCore_EditButton::QDataCore_EditButton(QWidget *parent)
    : QWidget(parent)
{
    _widget = new QCommandLinkButton(this);
    _widget->move(0,0);
    _widget->resize(100,50);
    _widget->setText("Cmd");
    _widget->show();
}

QSize QDataCore_EditButton::minimumSizeHint() const { return QSize(width(),height()); }
QSize QDataCore_EditButton::sizeHint()        const { return QSize(width(),height()); }

void QDataCore_EditButton::resizeEvent(QResizeEvent *event) {
    Q_UNUSED(event)
    _widget->resize(width(),height());
}

void QDataCore_EditButton::setState(const QString &newState)
{
    Q_UNUSED(newState)
    update();
}

QString QDataCore_EditButton::state() const
{
    return QString("myState");
}

void QDataCore_EditButton::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
    update();
}

void QDataCore_EditButton::paintEvent(QPaintEvent * event)
{
    QWidget::paintEvent(event);
}
