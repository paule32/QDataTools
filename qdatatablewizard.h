#ifndef QDATATABLEWIZARD_H
#define QDATATABLEWIZARD_H

#include <QWizard>

namespace Ui {
class QDataTableWizard;
}

class QDataTableWizard : public QWizard
{
    Q_OBJECT

public:
    explicit QDataTableWizard(QWidget *parent = nullptr);
    ~QDataTableWizard();

private slots:
    void on_connectButton_clicked();

private:
    Ui::QDataTableWizard *ui;
};

#endif // QDATATABLEWIZARD_H
