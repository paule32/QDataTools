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
#include "myfacebookwidget.h"
#include "myfacebookdialog.h"
#include "myfacebooktaskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QAction>

MyFaceBookTaskMenu::MyFaceBookTaskMenu(
      MyFaceBookWidget *wiz
    , QObject *parent)
    : QObject (parent)
    , editStateAction(new QAction(tr("Edit Prpperties..."), this))
    , dataTable(wiz)
{
    connect(editStateAction, &QAction::triggered, this, &MyFaceBookTaskMenu::editState);
}

void MyFaceBookTaskMenu::editState()
{
    MyFaceBookWizard dialog(dataTable);
    dialog.exec();
}

QList<QAction *> MyFaceBookTaskMenu::taskActions() const
{
    return QList<QAction *>{editStateAction};
}

MyFaceBookTaskMenuFactory::MyFaceBookTaskMenuFactory(QExtensionManager *parent)
    : QExtensionFactory(parent)
{
}

QObject *MyFaceBookTaskMenuFactory::createExtension(
    QObject *object, const
    QString &iid   ,
    QObject *parent) const
{
    if (iid != Q_TYPEID(QDesignerTaskMenuExtension))
        return nullptr;

    if (MyFaceBookWidget * wiz = qobject_cast<MyFaceBookWidget *>(object))
        return new MyFaceBookTaskMenu(wiz, parent);

    return nullptr;
}
