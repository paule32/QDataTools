#include "qdatatable.h"
#include "qdatatabledialog.h"
#include "qdatatabletaskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QAction>

QDataTableTaskMenu::QDataTableTaskMenu(QDataTable *tic, QObject *parent)
    : QObject(parent)
    , editStateAction(new QAction(tr("Edit Prpperties..."), this))
    , dataTable(tic)
{
    connect(editStateAction, &QAction::triggered, this, &QDataTableTaskMenu::editState);
}

void QDataTableTaskMenu::editState()
{
    QDataTableDialog dialog(dataTable);
    dialog.exec();
}

QList<QAction *> QDataTableTaskMenu::taskActions() const
{
    return QList<QAction *>{editStateAction};
}

QDataTableTaskMenuFactory::QDataTableTaskMenuFactory(QExtensionManager *parent)
    : QExtensionFactory(parent)
{
}

QObject *QDataTableTaskMenuFactory::createExtension(QObject *object,
                                                   const QString &iid,
                                                   QObject *parent) const
{
    if (iid != Q_TYPEID(QDesignerTaskMenuExtension))
        return nullptr;

    if (QDataTable *tic = qobject_cast<QDataTable*>(object))
        return new QDataTableTaskMenu(tic, parent);

    return nullptr;
}
