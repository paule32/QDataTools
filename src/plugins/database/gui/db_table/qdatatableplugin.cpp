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
#include "qdatatable.h"
#include "qdatatableplugin.h"
#include "qdatatabletaskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QtDesigner/QExtensionManager>
#include <QtPlugin>
#include <QVBoxLayout>

//QDesignerFormEditorInterface * my_formEditor;

QDataCore_Table_Plugin::QDataCore_Table_Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QDataCore_Table_Plugin::initialize(QDesignerFormEditorInterface * formEditor)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    QExtensionManager *manager = formEditor->extensionManager();
    Q_ASSERT(manager != 0);

    //my_formEditor = formEditor;

    manager->registerExtensions(
    new QDataTableTaskMenuFactory(manager),
    Q_TYPEID(QDesignerTaskMenuExtension));

    m_initialized = true;
}

bool QDataCore_Table_Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QDataCore_Table_Plugin::createWidget(QWidget *parent)
{
    return new QDataTable(parent);
}

QString QDataCore_Table_Plugin::name() const
{
    return QLatin1String("QDataTable");
}

QString QDataCore_Table_Plugin::group() const
{
    return QLatin1String("DataBase Widget's");
}

QIcon QDataCore_Table_Plugin::icon() const
{
    return QIcon(QLatin1String(":/img/icon-table.png"));
}

QString QDataCore_Table_Plugin::toolTip() const
{
    return QLatin1String("DataBase Tools für RAPID Database development");
}

QString QDataCore_Table_Plugin::whatsThis() const
{
    return QLatin1String("A Table plugin to display data on a form.\nNote:\nThis component is part of QDataTools package !\n");
}

bool QDataCore_Table_Plugin::isContainer() const
{
    return false;
}

QString QDataCore_Table_Plugin::domXml() const
{
    return QLatin1String("\
<ui language=\"c++\">\
    <widget class=\"QDataCore_Table\" name=\"dataCoreTable\"/>\
    <customwidgets>\
        <customwidget>\
            <class>QDataCore_Table</class>\
        </customwidget>\
    </customwidgets>\
</ui>");
}

QString QDataCore_Table_Plugin::includeFile() const
{
    return QLatin1String("qdatatable.h");
}
