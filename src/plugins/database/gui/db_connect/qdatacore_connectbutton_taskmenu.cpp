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
#include "qdatacore_connectbutton_dialog.h"
#include "qdatacore_connectbutton_plugin.h"
#include "qdatacore_connectbutton_taskmenu.h"

#if 0
#include <coreplugin/editormanager/editormanager.h>
#include <coreplugin/editormanager/ieditor.h>
#endif

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QAction>

#include <QMessageBox>

const QString LMYSQL_DRIVER("QMYSQL3");
const QString SQLITE_DRIVER("QSQLITE");

QDataCore_ConnectButton_TaskMenu::QDataCore_ConnectButton_TaskMenu(
      QDataCore_ConnectButton *wiz,
      QObject *parent)
    : QObject (parent)
    , editStateAction(new QAction(tr("Edit Prpperties..."), this))
    , dataTable(wiz)
{
    connect(editStateAction,
            &QAction::triggered,
            this,
            &QDataCore_ConnectButton_TaskMenu::editState);
}

void QDataCore_ConnectButton_TaskMenu::editState()
{
    // sanity properties check ...
    if (dataTable->UserName().trimmed().size() < 1) { QMessageBox::critical(0,"Error","No user name."); return; }
    if (dataTable->UserPass().trimmed().size() < 1) { QMessageBox::critical(0,"Error","No user pass."); return; }

    if (dataTable->DBHost().trimmed().size() < 1) { QMessageBox::critical(0,"Error","No host given."); return; }
    if (dataTable->DBName().trimmed().size() < 1) { QMessageBox::critical(0,"Error","No name given."); return; }
    if (dataTable->DBPort().trimmed().size() < 1) { QMessageBox::critical(0,"Error","No port given."); return; }

#if 0
    if (!QSqlDatabase::isDriverAvailable(LMYSQL_DRIVER)) {
        QMessageBox::warning(0,"Error","MySQL driver not available.");
        return;
    }

    QSqlDatabase db = QSqlDatabase::addDatabase((LMYSQL_DRIVER));
    db.setDatabaseName(dataTable->DBName());
    db.close();
#endif

#if 0
    Core::EditorManager::openEditorAt(
    QString("/etc/hosts"),1,1,
    "JostEditor",
    Core::EditorManager::NoFlags);

    /*
    QDataTableWizard dialog(dataTable);
    dialog.exec();*/
#endif
}

QList<QAction *> QDataCore_ConnectButton_TaskMenu::taskActions() const
{
    return QList<QAction *>{editStateAction};
}

QDataCore_ConnectButton_TaskMenuFactory::QDataCore_ConnectButton_TaskMenuFactory(QExtensionManager *parent)
    : QExtensionFactory(parent)
{
}

QObject *QDataCore_ConnectButton_TaskMenuFactory::createExtension(QObject *object,
                                                   const QString &iid,
                                                   QObject *parent) const
{
    if (iid != Q_TYPEID(QDesignerTaskMenuExtension))
        return nullptr;

    if (QDataCore_ConnectButton * wiz = qobject_cast<QDataCore_ConnectButton *>(object))
        return new QDataCore_ConnectButton_TaskMenu(wiz, parent);

    return nullptr;
}
