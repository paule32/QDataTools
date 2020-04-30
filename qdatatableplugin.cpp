#include "qdatatable.h"
#include "qdatatableplugin.h"
#include "qdatatabletaskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QtDesigner/QExtensionManager>
#include <QtPlugin>
#include <QVBoxLayout>

QDataTablePlugin::QDataTablePlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QDataTablePlugin::initialize(QDesignerFormEditorInterface * formEditor)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    QExtensionManager *manager = formEditor->extensionManager();
    Q_ASSERT(manager != 0);

    manager->registerExtensions(
    new QDataTableTaskMenuFactory(manager),
    Q_TYPEID(QDesignerTaskMenuExtension));

    m_initialized = true;
}

bool QDataTablePlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QDataTablePlugin::createWidget(QWidget *parent)
{
    return new QDataTable(parent);
}

QString QDataTablePlugin::name() const
{
    return QLatin1String("QDataTable");
}

QString QDataTablePlugin::group() const
{
    return QLatin1String("DataBase Widget's");
}

QIcon QDataTablePlugin::icon() const
{
    return QIcon(QLatin1String(":/img/icon_table.png"));
}

QString QDataTablePlugin::toolTip() const
{
    return QLatin1String("DataBase Tools für RAPID Database development");
}

QString QDataTablePlugin::whatsThis() const
{
    return QLatin1String("A Table plugin to display data on a form.\nNote:\nThis component is part of QDataTools package !\n");
}

bool QDataTablePlugin::isContainer() const
{
    return false;
}

QString QDataTablePlugin::domXml() const
{
    return QLatin1String("\
<ui language=\"c++\">\
    <widget class=\"QDataTable\" name=\"dataTable\"/>\
    <customwidgets>\
        <customwidget>\
            <class>QDataTable</class>\
        </customwidget>\
    </customwidgets>\
</ui>");
}

QString QDataTablePlugin::includeFile() const
{
    return QLatin1String("qdatatable.h");
}

