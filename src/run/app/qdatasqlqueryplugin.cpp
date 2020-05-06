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

