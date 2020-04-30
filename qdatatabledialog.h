#ifndef QDATATABLEDIALOG_H
#define QDATATABLEDIALOG_H

#include <QDialog>
#include <QDialogButtonBox>

#include "qdatatable.h"
#include "qdatatablewizard.h"

class QDataTableDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QDataTableDialog(QDataTable *tic, QWidget *parent = nullptr);

private:
    QDataTable * editor;
    QDataTable * dataTable;

    QDataTableWizard * dataTableWizard;
    QDialogButtonBox * buttonBox;
};

#endif
