#include "qdatatimer.h"
#include "qdatatimerplugin.h"
#include "qdatatimertaskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QtDesigner/QExtensionManager>
#include <QtPlugin>
#include <QVBoxLayout>

QDataTimerPlugin::QDataTimerPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QDataTimerPlugin::initialize(QDesignerFormEditorInterface * formEditor)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    QExtensionManager *manager = formEditor->extensionManager();
    Q_ASSERT(manager != 0);

    manager->registerExtensions(
    new QDataTimerTaskMenuFactory(manager),
    Q_TYPEID(QDesignerTaskMenuExtension));

    m_initialized = true;
}

bool QDataTimerPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QDataTimerPlugin::createWidget(QWidget *parent)
{
    return new QDataTimer(parent);
}

QString QDataTimerPlugin::name() const
{
    return QLatin1String("QDataTimer");
}

QString QDataTimerPlugin::group() const
{
    return QLatin1String("DataBase Widget's");
}

QIcon QDataTimerPlugin::icon() const
{
    return QIcon(QLatin1String(":/img/icon_clock.png"));
}

QString QDataTimerPlugin::toolTip() const
{
    return QLatin1String("DataBase Tools für RAPID Database development");
}

QString QDataTimerPlugin::whatsThis() const
{
    return QLatin1String("A Timer for using internal QData<object> object's.\nNote:\nThis component is part of QDataTools package !\n");
}

bool QDataTimerPlugin::isContainer() const
{
    return false;
}

QString QDataTimerPlugin::domXml() const
{
    return QLatin1String("\
<ui language=\"c++\">\
    <widget class=\"QDataTime\" name=\"dataTime\"/>\
    <customwidgets>\
        <customwidget>\
            <class>QDataTime</class>\
        </customwidget>\
    </customwidgets>\
</ui>");
}

QString QDataTimerPlugin::includeFile() const
{
    return QLatin1String("qdatatimer.h");
}

