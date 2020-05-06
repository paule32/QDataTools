#include "mypaypalbutton.h"
#include "ui_mypaypalbutton.h"

MyPayPalButton::MyPayPalButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyPayPalButton)
{
    ui->setupUi(this);
}

MyPayPalButton::~MyPayPalButton()
{
    delete ui;
}
