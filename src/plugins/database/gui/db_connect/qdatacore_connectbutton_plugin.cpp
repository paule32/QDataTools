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
#include "qdatacore_connectbutton_dialog.h"
#include "qdatacore_connectbutton_plugin.h"
#include "qdatacore_connectbutton_taskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QtDesigner/QExtensionManager>
#include <QtPlugin>
#include <QVBoxLayout>

QDataCore_ConnectButton_Plugin::QDataCore_ConnectButton_Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void QDataCore_ConnectButton_Plugin::initialize(QDesignerFormEditorInterface * formEditor)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    QExtensionManager *manager = formEditor->extensionManager();
    Q_ASSERT(manager != 0);

    //my_formEditor = formEditor;

    manager->registerExtensions(
    new QDataCore_ConnectButton_TaskMenuFactory(manager),
    Q_TYPEID(QDesignerTaskMenuExtension));

    m_initialized = true;
}

bool QDataCore_ConnectButton_Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *QDataCore_ConnectButton_Plugin::createWidget(QWidget *parent)
{
    return new QDataCore_ConnectButton(parent);
}

QString QDataCore_ConnectButton_Plugin::name() const
{
    return QLatin1String("QDataCore_ConnectButton");
}

QString QDataCore_ConnectButton_Plugin::group() const
{
    return QLatin1String("Internal Widget's");
}

QIcon QDataCore_ConnectButton_Plugin::icon() const
{
    return QIcon(QLatin1String(":/img/icon-table.png"));
}

QString QDataCore_ConnectButton_Plugin::toolTip() const
{
    return QLatin1String("DataBase Tools für RAPID Database development");
}

QString QDataCore_ConnectButton_Plugin::whatsThis() const
{
    return QLatin1String("A Table plugin to display data on a form.\nNote:\nThis component is part of QDataTools package !\n");
}

bool QDataCore_ConnectButton_Plugin::isContainer() const
{
    return false;
}

QString QDataCore_ConnectButton_Plugin::domXml() const
{
    return QLatin1String("\
<ui language=\"c++\">\
    <widget class=\"QDataCore_ConnectButton\" name=\"dataCore_ConnectButton\"/>\
    <customwidgets>\
        <customwidget>\
            <class>QDataCore_EditButton</class>\
        </customwidget>\
    </customwidgets>\
</ui>");
}

QString QDataCore_ConnectButton_Plugin::includeFile() const
{
    return QLatin1String("qdatacore_connectbutton_dialog.h");
}
