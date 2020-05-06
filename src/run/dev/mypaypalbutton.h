#ifndef MYPAYPALBUTTON_H
#define MYPAYPALBUTTON_H

#include <QWidget>

namespace Ui {
class MyPayPalButton;
}

class MyPayPalButton : public QWidget
{
    Q_OBJECT

public:
    explicit MyPayPalButton(QWidget *parent = nullptr);
    ~MyPayPalButton();

private:
    Ui::MyPayPalButton *ui;
};

#endif // MYPAYPALBUTTON_H
