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
#include <QWidget>
#include <QPushButton>
#include <QGraphicsProxyWidget>

#include "sqltool_mode.h"
#include "ui_sqltool_mode.h"

#include "scenewidgetitem.h"

MySQLToolMode::MySQLToolMode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MySQLToolMode)
{
    ui->setupUi(this);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setScene(new QGraphicsScene(this));

    // Add widget proxies + their parenting graphics items to scene
    addWidgetToScene(QPoint(10, 10));
    addWidgetToScene(QPoint(300, 100));
    addWidgetToScene(QPoint(200, 200));
}

MySQLToolMode::~MySQLToolMode()
{
    delete ui;
}

void MySQLToolMode::addWidgetToScene(QPoint initPos)
{
    // Create a widget
    SceneWidgetItem *widget = new SceneWidgetItem;

    QGraphicsRectItem *proxyControl =
    ui->graphicsView->scene()->addRect(
        initPos.x(),
        initPos.y(),
        widget->width(),
        20,
        QPen(Qt::black),
        QBrush(Qt::darkGreen));

    proxyControl->setFlag(QGraphicsItem::ItemIsMovable, true);
    proxyControl->setFlag(QGraphicsItem::ItemIsSelectable, true);

    QGraphicsProxyWidget * const proxy = ui->graphicsView->scene()->addWidget(widget);
    proxy->setPos(initPos.x(), initPos.y()+proxyControl->rect().height());
    proxy->setParentItem(proxyControl);
}

void MySQLToolMode::on_exportBtn_2_clicked()
{

}
