#include "aboutversionui.h"
#include "ui_aboutversionui.h"
#include <mainwindow.h>
#include <main.cpp>
AboutVersionUI::AboutVersionUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AboutVersionUI)
{
    ui->setupUi(this);

    ui->label_VersionT->setText("SerialPort  " Version_str);
    ui->label_UpdateDayT->setText(VersionDate_str);

    ui->tableWidget_VersionTable->setRowCount(1);     //設定QTableWidget列數
    ui->tableWidget_VersionTable->setItem(0,0,new QTableWidgetItem("2.1.0"));
    ui->tableWidget_VersionTable->setItem(0,1,new QTableWidgetItem("2019.3.18"));
    ui->tableWidget_VersionTable->setItem(0,2,new QTableWidgetItem(QString::fromLocal8Bit("更改@ATZ後delay時間")));
    ui->tableWidget_VersionTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

AboutVersionUI::~AboutVersionUI()
{
    delete ui;
}
