#include "qdatatimerplugin.h"
#include "qdatatableplugin.h"
#include "qdatasqlqueryplugin.h"
#include "qdatatoolscollection.h"

QDataToolsCollection::QDataToolsCollection(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new QDataTimerPlugin(this));
    m_widgets.append(new QDataTablePlugin(this));
    m_widgets.append(new QDataSqlQueryPlugin(this));

}

QList<QDesignerCustomWidgetInterface*> QDataToolsCollection::customWidgets() const
{
    return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(qdatatoolscollectionplugin, QDataToolsCollection)
#endif // QT_VERSION < 0x050000
