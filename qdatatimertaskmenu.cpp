#include "qdatatable.h"
#include "qdatatabledialog.h"

#include "qdatatimer.h"
#include "qdatatimerdialog.h"
#include "qdatatimertaskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QAction>

QDataTimerTaskMenu::QDataTimerTaskMenu(QDataTable *tic, QObject *parent)
    : QObject(parent)
    , editStateAction(new QAction(tr("Edit Prpperties..."), this))
    , dataTable(tic)
{
    connect(editStateAction, &QAction::triggered, this, &QDataTimerTaskMenu::editState);
}

void QDataTimerTaskMenu::editState()
{
    //QDataTimerDialog dialog(dataTable);
    //dialog.exec();
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

    if (QDataTable *tic = qobject_cast<QDataTable*>(object))
        return new QDataTimerTaskMenu(tic, parent);

    return nullptr;
}
