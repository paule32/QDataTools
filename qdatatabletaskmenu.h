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
#ifndef QDATATABLETASKMENU_H
#define QDATATABLETASKMENU_H

#include <QDesignerTaskMenuExtension>
#include <QExtensionFactory>

QT_BEGIN_NAMESPACE
class QAction;
class QExtensionManager;
QT_END_NAMESPACE
class QDataTable;

class QDataTableTaskMenu : public QObject, public QDesignerTaskMenuExtension
{
    Q_OBJECT
    Q_INTERFACES(QDesignerTaskMenuExtension)

public:
    explicit QDataTableTaskMenu(QDataTable *tic, QObject *parent);

    QList<QAction *> taskActions() const override;

private slots:
    void editState();

private:
    QAction *editStateAction;
    QDataTable *dataTable;
};

class QDataTableTaskMenuFactory : public QExtensionFactory
{
    Q_OBJECT

public:
    explicit QDataTableTaskMenuFactory(QExtensionManager *parent = nullptr);

protected:
    QObject *createExtension(QObject *object, const QString &iid, QObject *parent) const override;
};

#endif
