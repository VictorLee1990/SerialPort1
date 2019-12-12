#include "updateui.h"
#include "ui_updateui.h"
#include <QDir>
#include <QSerialPort>
#include <QSettings>
#include <QEventLoop>
#include <QTimer>
#include <QThread>

UpdateUI::UpdateUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateUI)
{
    ui->setupUi(this);

}

UpdateUI::~UpdateUI()
{
    _updateThread->quit();
    _updateThread->exit();
//    _updateThread->wait();
    _updateThread->terminate();
//    delete _updateThread;
    delete _xmodem;
//    emit quitSignal();
    _serialPort->closeSerialPort();
    _serialPort->openSerialPort(_srialPortInfo);
//    connect(_sp,SIGNAL(readyRead()), _serialPort,SLOT(readData()));
    delete ui;
}

void UpdateUI::setSerialPort(QSerialPort *sp, SerialPort *serialPort,QSerialPortInfo serialPortInfo)
{
        _xmodem = new XMODEM(sp);
        _sp = sp;
        _serialPort = serialPort;
        _srialPortInfo = serialPortInfo;
        connect(_xmodem,SIGNAL(setProgressSignal(double)),this,SLOT(setProgressBar(double)),Qt::QueuedConnection);
//        connect(sp,SIGNAL(readyRead()),_xmodem,SLOT(readData()));

       _updateThread = new QThread(this);

        _xmodem->moveToThread(_updateThread);
        connect(this,SIGNAL(updateSignal(QString)),_xmodem,SLOT(sendFile(QString)));

        _updateThread->start();
}

void UpdateUI::setProgressBar(double count)
{
    ui->Update_progressBar->setValue((int)count);
}

void UpdateUI::on_Update_Btn_clicked()
{
    QString  fileName  = QFileDialog ::getOpenFileName(this,QStringLiteral("Open"),
                                                       QStandardPaths ::writableLocation( QStandardPaths :: DocumentsLocation ),
                                                       QStringLiteral("bin(*.bin)") );


//    bool success;
//    char byteBuf;

//    QEventLoop eventLoop;
//    QTimer timer;
//    timer.setSingleShot(true);

//    connect(&timer, SIGNAL(timeout()), &eventLoop, SLOT(quit()));
//    connect(_sp, SIGNAL(readyRead()), &eventLoop, SLOT(quit()));

    _sp->readAll();

    emit(updateSignal(fileName));
//    _xmodem->sendFile(fileName);
//    if  (fileName!= "" )
//    {
//        QFile file(fileName);

//        if (file.open(QIODevice::ReadWrite)) {

//            QTextStream out(&file);

//            file.flush();
//            file.close();
//        }
//        else {
//            QMessageBox::critical(this, tr("Error"), tr("Non posso salvare il file"));
//            return;
//        }
//    }


}

void UpdateUI::updateProgram(QString fileName)
{
     _xmodem->sendFile(fileName);
}

void UpdateUI::on_Cancel_Btn_clicked()
{
    _updateThread->quit();
    _updateThread->exit();
//    _updateThread->wait();
    _updateThread->terminate();
//    delete _updateThread;
    delete _xmodem;
    emit quitSignal();
    _serialPort->closeSerialPort();
    _serialPort->openSerialPort(_srialPortInfo);
//    connect(_sp,SIGNAL(readyRead()), _serialPort,SLOT(readData()));
}
