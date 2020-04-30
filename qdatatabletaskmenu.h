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
