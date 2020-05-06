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
#include "qdatatimerdialog.h"
#include "qdatatimertaskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QAction>

QDataTimerTaskMenu::QDataTimerTaskMenu(QDataTimer *tic, QObject *parent)
    : QObject(parent)
    , editStateAction(new QAction(tr("Edit Prpperties..."), this))
    , dataTimer(tic)
{
    connect(editStateAction, &QAction::triggered,
            this, &QDataTimerTaskMenu::editState);
}

void QDataTimerTaskMenu::editState()
{
    QDataTimerWizard dialog(dataTimer);
    dialog.exec();
}

QList<QAction *> QDataTimerTaskMenu::taskActions() const
{
    return QList<QAction *>{editStateAction};
}

QDataTimerTaskMenuFactory::QDataTimerTaskMenuFactory(QExtensionManager *parent)
    : QExtensionFactory(parent)
{
}

QObject *QDataTimerTaskMenuFactory::createExtension(QObject *object,
                                                   const QString &iid,
                                                   QObject *parent) const
{
    if (iid != Q_TYPEID(QDesignerTaskMenuExtension))
        return nullptr;

    if (QDataTimer *tic = qobject_cast<QDataTimer *>(object))
        return new QDataTimerTaskMenu(tic, parent);

    return nullptr;
}
