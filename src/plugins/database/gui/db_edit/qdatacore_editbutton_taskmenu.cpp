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
#include "qdatacore_editbutton_dialog.h"
#include "qdatacore_editbutton_plugin.h"
#include "qdatacore_editbutton_taskmenu.h"

#if 0
#include <coreplugin/editormanager/editormanager.h>
#include <coreplugin/editormanager/ieditor.h>
#endif

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QAction>
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>

QDataCore_EditButton_TaskMenu::QDataCore_EditButton_TaskMenu(QDataCore_EditButton *wiz, QObject *parent)
    : QObject(parent)
    , editStateAction(new QAction(tr("Edit Prpperties..."), this))
    , dataTable(wiz)
{
    connect(editStateAction, &QAction::triggered, this, &QDataCore_EditButton_TaskMenu::editState);
}

void QDataCore_EditButton_TaskMenu::doChangeText()
{
    dataTable ->_widget->setText(lineEdit->text());
    dialogEdit->close();
}

void QDataCore_EditButton_TaskMenu::editState()
{
    dialogEdit      = new QDialog;
    lineEdit        = new QLineEdit  (dialogEdit);
    QPushButton *pb = new QPushButton(dialogEdit);
    pb->setText("Ok");

    connect(pb,&QPushButton::clicked,this,
            &QDataCore_EditButton_TaskMenu::doChangeText);

    QVBoxLayout * layout = new QVBoxLayout;
    layout->addWidget(pb);
    layout->addWidget(lineEdit);

    dialogEdit->setLayout(layout);
    dialogEdit->exec();

    /*
    Core::EditorManager::openEditorAt(
    QString("/etc/hosts"),1,1,
    "JostEditor",
    Core::EditorManager::NoFlags);*/

    /*
    QDataTableWizard dialog(dataTable);
    dialog.exec();*/
}

QList<QAction *> QDataCore_EditButton_TaskMenu::taskActions() const
{
    return QList<QAction *>{editStateAction};
}

QDataCore_EditButton_TaskMenuFactory::QDataCore_EditButton_TaskMenuFactory(QExtensionManager *parent)
    : QExtensionFactory(parent)
{
}

QObject *QDataCore_EditButton_TaskMenuFactory::createExtension(QObject *object,
                                                   const QString &iid,
                                                   QObject *parent) const
{
    if (iid != Q_TYPEID(QDesignerTaskMenuExtension))
        return nullptr;

    if (QDataCore_EditButton * wiz = qobject_cast<QDataCore_EditButton *>(object))
        return new QDataCore_EditButton_TaskMenu(wiz, parent);

    return nullptr;
}
