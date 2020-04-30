#ifndef QDATATIMERDIALOG_H
#define QDATATIMERDIALOG_H

#include <QObject>
#include <QWidget>

#include "qdatatable.h"
#include "qdatatabledialog.h"

class QDataTimerDialog : public QDialog
{
    Q_OBJECT
public:
    explicit QDataTimerDialog(QDataTable *tic, QWidget *parent = nullptr);

private:
    QDataTable * editor;
    QDataTable * dataTable;

    QDataTableWizard * dataTableWizard;
    QDialogButtonBox * buttonBox;
};

#endif // QDATATIMERDIALOG_H
