#include "qdatatablewizard.h"
#include "ui_qdatatablewizard.h"

QDataTableWizard::QDataTableWizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::QDataTableWizard)
{
    ui->setupUi(this);
}

QDataTableWizard::~QDataTableWizard()
{
    delete ui;
}

void QDataTableWizard::on_connectButton_clicked()
{

}
