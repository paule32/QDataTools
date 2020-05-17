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
    return QLatin1String("Tool Widget's");
}

QIcon QDataTimerPlugin::icon() const
{
    return QIcon(QLatin1String(":/img/icon-clock24.png"));
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
    <widget class=\"QDataTimer\" name=\"dataTimer\"/>\
    <customwidgets>\
        <customwidget>\
            <class>QDataTimer</class>\
        </customwidget>\
    </customwidgets>\
</ui>");
}

QString QDataTimerPlugin::includeFile() const
{
    return QLatin1String("qdatatimer.h");
}

