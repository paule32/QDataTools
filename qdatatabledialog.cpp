#include "qdatatable.h"
#include "qdatatabledialog.h"
#include "qdatatablewizard.h"

#include <QtDesigner/QDesignerFormWindowInterface>
#include <QtDesigner/QDesignerFormWindowCursorInterface>

#include <QDialogButtonBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QVariant>

QDataTableDialog::QDataTableDialog(QDataTable *tic, QWidget *parent)
    : QDialog(parent)
    , editor(new QDataTable)
    , dataTable(tic)
    , buttonBox(new QDialogButtonBox(QDialogButtonBox::Ok))
{
    //editor->setState(QString("sssss"));
    //connect(buttonBox->button(QDialogButtonBox::Reset), &QAbstractButton::clicked, this, &QDataTableDialog::resetState);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(editor);
    mainLayout->addWidget(buttonBox);

    setLayout(mainLayout);
    setWindowTitle("Properties...");
}
