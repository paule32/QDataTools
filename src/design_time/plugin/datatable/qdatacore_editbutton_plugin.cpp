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
#include "qdatacore_editbutton_dialog.h"
#include "qdatacore_editbutton_plugin.h"
#include "qdatacore_editbutton_taskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QtDesigner/QExtensionManager>
#include <QtPlugin>
#include <QVBoxLayout>

//QDesignerFormEditorInterface * my_formEditor;

QDataCore_EditButton_Plugin::QDataCore_EditButton_Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QDataCore_EditButton_Plugin::initialize(QDesignerFormEditorInterface * formEditor)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    QExtensionManager *manager = formEditor->extensionManager();
    Q_ASSERT(manager != 0);

    //my_formEditor = formEditor;

    manager->registerExtensions(
    new QDataCore_EditButton_TaskMenuFactory(manager),
    Q_TYPEID(QDesignerTaskMenuExtension));

    m_initialized = true;
}

bool QDataCore_EditButton_Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QDataCore_EditButton_Plugin::createWidget(QWidget *parent)
{
    return new QDataCore_EditButton(parent);
}

QString QDataCore_EditButton_Plugin::name() const
{
    return QLatin1String("QDataCore_EditButton");
}

QString QDataCore_EditButton_Plugin::group() const
{
    return QLatin1String("Internal Widget's");
}

QIcon QDataCore_EditButton_Plugin::icon() const
{
    return QIcon(QLatin1String(":/img/icon_table.png"));
}

QString QDataCore_EditButton_Plugin::toolTip() const
{
    return QLatin1String("DataBase Tools für RAPID Database development");
}

QString QDataCore_EditButton_Plugin::whatsThis() const
{
    return QLatin1String("A Table plugin to display data on a form.\nNote:\nThis component is part of QDataTools package !\n");
}

bool QDataCore_EditButton_Plugin::isContainer() const
{
    return false;
}

QString QDataCore_EditButton_Plugin::domXml() const
{
    return QLatin1String("\
<ui language=\"c++\">\
    <widget class=\"QDataCore_EditButton\" name=\"dataCore_EditButton\"/>\
    <customwidgets>\
        <customwidget>\
            <class>QDataCore_EditButton</class>\
        </customwidget>\
    </customwidgets>\
</ui>");
}

QString QDataCore_EditButton_Plugin::includeFile() const
{
    return QLatin1String("qdatacore_editbutton_dialog.h");
}
