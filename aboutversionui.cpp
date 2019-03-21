#include "aboutversionui.h"
#include "ui_aboutversionui.h"

AboutVersionUI::AboutVersionUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AboutVersionUI)
{
    ui->setupUi(this);
}

AboutVersionUI::~AboutVersionUI()
{
    delete ui;
}
