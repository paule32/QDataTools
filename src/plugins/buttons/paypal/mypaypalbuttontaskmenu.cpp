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
#include "mypaypalbuttonwidget.h"
#include "mypaypalbuttondialog.h"
#include "mypaypalbuttontaskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QAction>

MyPayPalButtonTaskMenu::MyPayPalButtonTaskMenu(
      MyPayPalButtonWidget *wiz
    , QObject *parent)
    : QObject (parent)
    , editStateAction(new QAction(tr("Edit Prpperties..."), this))
    , dataTable(wiz)
{
    connect(editStateAction, &QAction::triggered,
	    this, &MyPayPalButtonTaskMenu::editState);
}

void MyPayPalButtonTaskMenu::editState()
{
    MyPayPalButtonWizard dialog(dataTable);
    dialog.exec();
}

QList<QAction *> MyPayPalButtonTaskMenu::taskActions() const
{
    return QList<QAction *>{editStateAction};
}

MyPayPalButtonTaskMenuFactory::MyPayPalButtonTaskMenuFactory(
      QExtensionManager *parent)
    : QExtensionFactory (parent) {
}

QObject *MyPayPalButtonTaskMenuFactory::createExtension(
    QObject *object, const
    QString &iid   ,
    QObject *parent) const
{
    if (iid != Q_TYPEID(QDesignerTaskMenuExtension))
        return nullptr;

    if (MyPayPalButtonWidget * wiz = qobject_cast<MyPayPalButtonWidget *>(object))
        return new MyPayPalButtonTaskMenu(wiz, parent);

    return nullptr;
}
