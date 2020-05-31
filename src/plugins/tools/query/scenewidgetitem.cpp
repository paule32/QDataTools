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
#include <QLabel>
#include <QCheckBox>
#include <QListWidget>
#include <QListWidgetItem>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QPainterPath>
#include <QPen>
#include <QBrush>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>

#include "sqltool_widget.h"
#include "scenewidgetitem.h"

struct MyPointClass {
    QPoint A;
    QPoint B;
    unsigned int count;
} MyPointClass;
struct MyPointClass myPointClass;

My_SQLWidget::My_SQLWidget(QWidget *parent)
    : QWidget(parent)
{
}
void My_SQLWidget::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
    QWidget::mousePressEvent(event);
}

MyScenePort::MyScenePort(QObject * parent) : QGraphicsScene(parent) {
    myPointClass.count = 0;
}

#if 0
void MyScenePort::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QGraphicsScene::mousePressEvent(event);

    /* Ignore everything else except left button's press */
    if (event->type() != QEvent::GraphicsSceneMousePress ||
        event->button() != Qt::LeftButton) {
        return;
    }
    switch (myPointClass.count) {
    case 0:
        myPointClass.A.setX(event->scenePos().x());
        myPointClass.A.setY(event->scenePos().y());
        break;
    case 1: {
        myPointClass.B.setX(event->scenePos().x());
        myPointClass.B.setY(event->scenePos().y());

        /* Draw AB line */
        QPainterPath path(myPointClass.A);
        QBrush brush;
        QPen   pen;

        pen.setStyle(Qt::SolidLine);
        pen.setWidth(2);
        pen.setBrush(Qt::black);
        pen.setCapStyle(Qt::RoundCap);
        pen.setJoinStyle(Qt::RoundJoin);

        brush.setStyle(Qt::SolidPattern);
        brush.setColor(Qt::black);

        path.lineTo(myPointClass.B);
        addPath(path, pen, brush);
        }
        break;
    default:
        break;
    }
    if (myPointClass.count >= 1) {
        myPointClass.count = 0;
    } else {
        myPointClass.count++;
    }
}
#endif

// Create a widget with whichever UI components you like
SceneWidgetItem::SceneWidgetItem(QWidget *parent) : QWidget(parent)
{
    QScrollArea * const scroll(new QScrollArea);
    QVBoxLayout * const layout(new QVBoxLayout(scroll));

    layout->setMargin (2);
    layout->setSpacing(2);
    layout->setContentsMargins(0,0,0,0);

    QLabel    * const ilbl1(new QLabel("Table: TableA"));
    QCheckBox * const ichk1(new QCheckBox("All"));

    layout->addWidget(ilbl1,2,Qt::AlignTop);
    layout->addWidget(ichk1,2,Qt::AlignTop);

    for (int idx = 1; idx < 8; ++idx) {
        QHBoxLayout * const ilay(new QHBoxLayout(scroll));
        QCheckBox   * const ichk(new QCheckBox(QString("Field: %1").arg(idx)));
        QLabel      * const ilbl(new QLabel("Key"));
        QCheckBox   * const ikey(new QCheckBox);
        QWidget     * const ilhs(new QWidget);  // lhs rel.
        QWidget     * const irhs(new QWidget);  // rhs rel.

        ilhs->setStyleSheet(":active {background-color:lime;} :hover {background-color:yellow;}");
        irhs->setStyleSheet(":active {background-color:lime;} :hover {background-color:yellow;}");

        ilhs->setMinimumWidth(14); ilhs->setMinimumHeight(10);
        irhs->setMinimumWidth(14); irhs->setMinimumHeight(10);

        ilay->addWidget(ilhs);
        ilay->addWidget(ichk);
        ilay->addWidget(ilbl);
        ilay->addWidget(ikey);
        ilay->addWidget(irhs);

        layout->addLayout(ilay);
        setLayout(layout);
    }

    resize(layout->sizeHint());
    setLayout(layout);

    /*
  combobox = new QComboBox(this);
  combobox->addItem("---");
  combobox->addItem("Item 1");
  combobox->addItem("Item 2");
  combobox->addItem("Item 3");
  label = new QLabel(this);
  label->setText(combobox->itemText(0));
  resetButton = new QPushButton("Reset", this);

  // Maybe add some signals :P
  connect(checkbox   , SIGNAL(toggled(bool)), combobox, SLOT(setEnabled(bool)));
  connect(checkbox   , SIGNAL(toggled(bool)), resetButton, SLOT(setEnabled(bool)));
  connect(resetButton, SIGNAL(clicked(bool)), this, SLOT(reset()));
  connect(combobox   , SIGNAL(currentIndexChanged(QString)), label, SLOT(setText(QString)));
*/

}

SceneWidgetItem::~SceneWidgetItem()
{

}
