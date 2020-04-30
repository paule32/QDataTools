#include "qdatasqlquery.h"
#include "qdatasqlqueryplugin.h"

#include <QtPlugin>

QDataSqlQueryPlugin::QDataSqlQueryPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QDataSqlQueryPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool QDataSqlQueryPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QDataSqlQueryPlugin::createWidget(QWidget *parent)
{
    return new QDataSqlQuery(parent);
}

QString QDataSqlQueryPlugin::name() const
{
    return QLatin1String("QDataSqlQuery");
}

QString QDataSqlQueryPlugin::group() const
{
    return QLatin1String("DataBase Widget's");
}

QIcon QDataSqlQueryPlugin::icon() const
{
    return QIcon(QLatin1String(":/img/icon_sql.png"));
}

QString QDataSqlQueryPlugin::toolTip() const
{
    return QLatin1String("DataBase Tools für RAPID Database development");
}

QString QDataSqlQueryPlugin::whatsThis() const
{
    return QLatin1String("A SQL component for creating data queries sql with SQL programming language keywords.\nNote:\nThis component is part of QDataTools package !");
}

bool QDataSqlQueryPlugin::isContainer() const
{
    return false;
}

QString QDataSqlQueryPlugin::domXml() const
{
    return QLatin1String("\
<ui language=\"c++\">\
    <widget class=\"QDataSqlQuery\" name=\"dataSqlQuery\"/>\
    <customwidgets>\
        <customwidget>\
            <class>QDataSqlQuery</class>\
        </customwidget>\
    </customwidgets>\
</ui>");
}

QString QDataSqlQueryPlugin::includeFile() const
{
    return QLatin1String("qdatasqlquery.h");
}

