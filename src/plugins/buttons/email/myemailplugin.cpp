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
#include "myemailwidget.h"
#include "myemailplugin.h"
#include "myemailtaskmenu.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QtDesigner/QExtensionManager>
#include <QtPlugin>
#include <QVBoxLayout>

MyEmailButtonPlugin::MyEmailButtonPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MyEmailButtonPlugin::initialize(QDesignerFormEditorInterface * formEditor)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    QExtensionManager *manager = formEditor->extensionManager();
    Q_ASSERT(manager != 0);

    manager->registerExtensions(
    new MyEmailTaskMenuFactory(manager),
    Q_TYPEID(QDesignerTaskMenuExtension));

    m_initialized = true;
}

bool MyEmailButtonPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MyEmailButtonPlugin::createWidget(QWidget *parent)
{
    return new MyEmailButtonWidget(parent);
}

QString MyEmailButtonPlugin::name() const
{
    return QLatin1String("MyEmailButtonWidget");
}

QString MyEmailButtonPlugin::group() const
{
    return QLatin1String("Tool Widget's");
}

QIcon MyEmailButtonPlugin::icon() const
{
    return QIcon(QLatin1String(":/img/icon-mail32.png"));
}

QString MyEmailButtonPlugin::toolTip() const
{
    return QLatin1String("DataBase Tools für RAPID Database development");
}

QString MyEmailButtonPlugin::whatsThis() const
{
    return QLatin1String("A Table plugin to display data on a form.\nNote:\nThis component is part of QDataTools package !\n");
}

bool MyEmailButtonPlugin::isContainer() const
{
    return false;
}

QString MyEmailButtonPlugin::domXml() const
{
    return QLatin1String("\
<ui language=\"c++\">\
    <widget class=\"MyEmailButtonWidget\" name=\"myEmailButtonWidget\"/>\
    <customwidgets>\
        <customwidget>\
            <class>MyEmailButtonWidget</class>\
        </customwidget>\
    </customwidgets>\
</ui>");
}

QString MyEmailButtonPlugin::includeFile() const
{
    return QLatin1String("myemailwidget.h");
}

