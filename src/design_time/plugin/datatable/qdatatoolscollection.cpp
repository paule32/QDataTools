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
#include "qdatatableplugin.h"
#include "qdatatimerplugin.h"
#include "qdatacore_editbutton_plugin.h"
#include "qdatacore_connectbutton_plugin.h"

#include "myemailplugin.h"
#include "mypaypalbuttonplugin.h"
#include "myfacebookplugin.h"

#include "qdatasqlqueryplugin.h"
#include "qdatatoolscollection.h"

QDataToolsCollection::QDataToolsCollection(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new QDataTablePlugin(this));
    m_widgets.append(new QDataTimerPlugin(this));
    m_widgets.append(new QDataCore_EditButton_Plugin(this));
    m_widgets.append(new QDataCore_ConnectButton_Plugin(this));

    m_widgets.append(new MyEmailButtonPlugin(this));
    m_widgets.append(new MyPayPalButtonPlugin(this));
    m_widgets.append(new MyFaceBookPlugin(this));
}

QList<QDesignerCustomWidgetInterface*> QDataToolsCollection::customWidgets() const
{
    return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(qdatatoolscollectionplugin, QDataToolsCollection)
#endif // QT_VERSION < 0x050000
