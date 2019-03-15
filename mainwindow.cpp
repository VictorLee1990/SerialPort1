#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSizeGrip>
#include <QDir>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _serialPoart = new SerialPort();
    //    _luna2CommandSys = _commandFactory.creatSystem(CommandFactory::COMMANDTYPE::Luna2,_serialPoart);
    getSerialPort();
    myTimer2 = new QTimer();
    _clear_Btn = new QPushButton();
    _rssi_Btn = new QPushButton();
    _label_rxByte = new QLabel();
    _label_txByte = new QLabel();
    _label_rssi = new QLabel();

    ui->statusBar->addPermanentWidget(_label_txByte);
    _label_txByte->setText("Tx  " + QString::number(_serialPoart->txByte) + " Byte|");
    ui->statusBar->addPermanentWidget(_label_rxByte);
    _label_rxByte->setText("Rx  " + QString::number(_serialPoart->rxByte) + " Byte");
    ui->statusBar->addPermanentWidget(_clear_Btn);
    _clear_Btn->setIcon(QIcon(QDir::currentPath()+"\\clear.png"));
    _clear_Btn->setIconSize(QSize(35,30));
    ui->statusBar->addWidget(_rssi_Btn);
    ui->statusBar->addWidget(_label_rssi);
    _rssi_Btn->setIcon(QIcon(QDir::currentPath()+"\\rssi icon.jpg"));
    _rssi_Btn->setIconSize(QSize(20,15));
    ui->statusBar->setSizeGripEnabled(false);
    connect(myTimer2,SIGNAL(timeout()),this,SLOT(configure()));
    connect(_serialPoart,SIGNAL(updateTextEditSignal(QString, bool)),this,SLOT(updateTextEdit(QString, bool)),Qt::DirectConnection);
    connect(_clear_Btn,SIGNAL(clicked()),this,SLOT(on_clear_Btn_clicked()));
    connect(_rssi_Btn,SIGNAL(clicked()),this,SLOT(on_rssi_Btn_clicked()));
    connect(ui->actionSave_log,SIGNAL(triggered(bool)),this,SLOT(actionSaveLog()));
    _ConfigCount = 1;

    _wordCompleter = new QCompleter(_wordList, this);
    _wordCompleter->setCaseSensitivity(Qt::CaseInsensitive);
    _UDIDCompleter = new QCompleter(_word_UDID_List,this);
    _UDIDCompleter->setCaseSensitivity(Qt::CaseInsensitive);

    //     _shortEnter = new QShortcut(QKeySequence(Qt::Key_Enter), this);
    //     connect(_shortEnter, SIGNAL(activated()), this, SLOT(on_SendData_Btn_clicked()));
    ui->SendData_Btn->setShortcut(tr("Return"));

    _baudRateGroup = new QActionGroup(this);
    _baudRateGroup->setExclusive(true);
    ui->action1200->setActionGroup(_baudRateGroup);
    ui->action2400->setActionGroup(_baudRateGroup);
    ui->action4800->setActionGroup(_baudRateGroup);
    ui->action9600->setActionGroup(_baudRateGroup);
    ui->action19200->setActionGroup(_baudRateGroup);
    ui->action38400->setActionGroup(_baudRateGroup);
    ui->action57600->setActionGroup(_baudRateGroup);
    ui->action115200->setActionGroup(_baudRateGroup);
    connect(_baudRateGroup, SIGNAL(triggered(QAction*)), this, SLOT(actionBaudRate(QAction*)));
    //    connect(ui->action1200,SIGNAL(toggled(bool)),this,SLOT(actionBaudRate(bool)));
    //    connect(ui->action2400,SIGNAL(toggled(bool)),this,SLOT(actionBaudRate(bool)));
    //    connect(ui->action4800,SIGNAL(toggled(bool)),this,SLOT(actionBaudRate(bool)));
    //    connect(ui->action9600,SIGNAL(toggled(bool)),this,SLOT(actionBaudRate(bool)));
    //    connect(ui->action14400,SIGNAL(toggled(bool)),this,SLOT(actionBaudRate(bool)));
    //    connect(ui->action19200,SIGNAL(toggled(bool)),this,SLOT(actionBaudRate(bool)));
    //    connect(ui->action38400,SIGNAL(toggled(bool)),this,SLOT(actionBaudRate(bool)));
    //    connect(ui->action57600,SIGNAL(toggled(bool)),this,SLOT(actionBaudRate(bool)));
    //    connect(ui->action115200,SIGNAL(toggled(bool)),this,SLOT(actionBaudRate(bool)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getSerialPort()
{
    _serialPortList.clear();
    ui->serialPortAssitant_CB->clear();
    _serialPortList = _serialPoart->getSerialPortID();
    _serialPortList.length();
    for(int i=0;i<_serialPortList.length();i++)
    {
        QString serialName = _serialPortList[i].portName();
        ui->serialPortAssitant_CB->addItem(serialName);
    }

}

void MainWindow::updateTextEdit(QString DataStr, bool HexSend)
{
    setCursor(QCursor(Qt::WaitCursor));
    if(DataStr != "\n")
    {
        _dataStr+=DataStr;
        ui->textEdit_printdata->setText(_dataStr);
        ui->textEdit_printdata->moveCursor(QTextCursor::End);
    }

    if(_currentCommand == _atCommand.atReset())
    {
        ui->label_Version->setText(ui->label_Version->text()+DataStr);
    }
    else if(_currentCommand == _atCommand.atRFFrequencyGet())
    {
        _bufferStr += DataStr;

        if(_bufferStr.contains("OK",Qt::CaseSensitive))
        {
            _bufferStr.replace(QString("OK"), QString(""));
            _bufferStr = _bufferStr.simplified();
            _bufferStr.insert(_bufferStr.length()," Hz");
            ui->lineEdit_RFFrequency->setText(_bufferStr);
            _bufferStr.prepend(QString("RF_Frequency:"));
            ui->label_RFFrequency->setText(_bufferStr);
            _bufferStr ="";
            _currentCommand = nullptr;

        }

    }
    else if(_currentCommand == _atCommand.atOutputPowerGet())
    {
        _bufferStr += DataStr;

        if(_bufferStr.contains("OK",Qt::CaseSensitive))
        {

            _bufferStr.replace(QString("OK"), QString(""));
            _bufferStr = _bufferStr.simplified();
            _bufferStr.insert(_bufferStr.length()," dBm");
            ui->lineEdit_TXO->setText(_bufferStr);
            _bufferStr ="";
            _currentCommand = nullptr;
        }

    }
    else if(_currentCommand == _atCommand.atBandWidthGet())
    {
        _bufferStr += DataStr;

        if(_bufferStr.contains("OK",Qt::CaseSensitive))
        {
            _bufferStr.replace(QString("OK"), QString(""));
            _bufferStr = _bufferStr.simplified();
            //            _bufferStr.remove(4,9);
            ui->lineEdit_BW->setText(_bufferStr);
            _bufferStr ="";
            _currentCommand = nullptr;

        }
    }
    else if(_currentCommand == _atCommand.atRssiGet())
    {
        _bufferStr += DataStr;


        if(_bufferStr.contains("OK",Qt::CaseSensitive))
        {

            _bufferStr.replace(QString("OK"), QString(""));
            _bufferStr = _bufferStr.simplified();
            _label_rssi->setText("RSSI " + _bufferStr);

            _bufferStr ="";
            _currentCommand = nullptr;

        }
    }
    else if(_currentCommand == _atCommand.atSpreadingFactorGet())
    {
        _bufferStr += DataStr;


        if(_bufferStr.contains("OK",Qt::CaseSensitive))
        {


            _bufferStr.replace(QString("OK"), QString(""));
            _bufferStr = _bufferStr.simplified();
            ui->lineEdit_SF->setText(_bufferStr);
            _bufferStr ="";
            _currentCommand = nullptr;

        }
    }
    else if(_currentCommand == _atCommand.atBaudRateGet())
    {
        _bufferStr += DataStr;


        if(_bufferStr.contains("OK",Qt::CaseSensitive))
        {
            _bufferStr.replace(QString("OK"), QString(""));
            _bufferStr = _bufferStr.simplified();

            if(_bufferStr == ui->action1200->text())
            {
                ui->action1200->setChecked(true);
            }
            else if(_bufferStr == ui->action2400->text())
            {
                ui->action2400->setChecked(true);
            }
            else if(_bufferStr == ui->action4800->text())
            {
                ui->action4800->setChecked(true);
            }
            else if(_bufferStr == ui->action9600->text())
            {
                ui->action9600->setChecked(true);
            }
            else if(_bufferStr == ui->action19200->text())
            {
                ui->action19200->setChecked(true);
            }
            else if(_bufferStr == ui->action38400->text())
            {
                ui->action38400->setChecked(true);
            }
            else if(_bufferStr == ui->action57600->text())
            {
                ui->action57600->setChecked(true);
            }
            else if(_bufferStr == ui->action115200->text())
            {
                ui->action115200->setChecked(true);
            }


            _bufferStr ="";
            _currentCommand = nullptr;

        }
    }

    _label_rxByte->setText("Rx  " + QString::number(_serialPoart->rxByte) + " Byte");
    qDebug() << _serialPoart->rxByte;
    setCursor(QCursor(Qt::ArrowCursor));
}

void MainWindow::configure()
{
    switch(_ConfigCount)
    {
    case 1:

        _currentCommand = QString::fromStdString(_atCommand.atRFFrequencySet((ui->comboBox_RFFrequency->currentText().toStdString())));
        _luna2CommandSys->configure(_currentCommand,1);
        _ConfigCount++;
        break;
    case 2:

        _currentCommand = QString::fromStdString(_atCommand.atOutputPowerSet((ui->comboBox_TXO->currentText().toStdString())));
        _luna2CommandSys->configure(_currentCommand,2);
        _ConfigCount++;
        break;
    case 3:

        _currentCommand = QString::fromStdString(_atCommand.atBandWidthSet((ui->comboBox_BW->currentText().toStdString())));
        _luna2CommandSys->configure(_currentCommand,3);
        _ConfigCount++;
        break;
    case 4:

        _currentCommand = QString::fromStdString(_atCommand.atSpreadingFactorSet(ui->comboBox_SF->currentText().toStdString()));
        _luna2CommandSys->configure(_currentCommand,4);
        myTimer2->stop();
        break;
    }
}

void MainWindow::on_SendData_Btn_clicked()
{

    ui->lineEdit->setCompleter(_wordCompleter);
    //    _wordList.push_back(ui->lineEdit->text());
    QString txt = _wordCompleter->currentCompletion();
    if(txt == "")
    {
        _wordList<<ui->lineEdit->text();
        _wordCompleter->setModel(new QStringListModel(_wordList, this));
    }

    if(_serialPoart->isOpened)
    {
        if(_luna2CommandSys != nullptr)
        {
            _currentCommand = nullptr;
            if(ui->radioButton_luna2_PASS->isChecked())
            {
                _serialPoart->sendData(ui->lineEdit->text().toLatin1(),false);
                _label_txByte->setText("Tx  " + QString::number(_serialPoart->txByte) + " Byte|");
            }
            else if(ui->radioButton_luna2_UDID->isChecked())
            {
                QString sendData;
                sendData = "&*" + _UDID + "," + ui->lineEdit->text().toLatin1();
                _serialPoart->sendData(sendData,false);
                _label_txByte->setText("Tx  " + QString::number(_serialPoart->txByte) + " Byte|");
            }
            else if(ui->radioButton_luna2_MS->isChecked())
            {
                if(ui->checkBox_luna2_master->isChecked())
                {
                    if(ui->textEdit_luna2_group->toPlainText() != "")
                    {
                        QString sendData;
                        sendData = "&*" + ui->textEdit_luna2_group->toPlainText().toLatin1() +"," + _UDID + "," + ui->lineEdit->text().toLatin1();
                        _serialPoart->sendData(sendData,false);
                        _label_txByte->setText("Tx  " + QString::number(_serialPoart->txByte) + " Byte|");
                    }
                    else
                    {
                        _serialPoart->sendData(ui->lineEdit->text().toLatin1(),false);
                        _label_txByte->setText("Tx  " + QString::number(_serialPoart->txByte) + " Byte|");
                    }
                }
                else if(ui->checkBox_luna2_slave->isChecked())
                {
                    _serialPoart->sendData(ui->lineEdit->text().toLatin1(),false);
                    _label_txByte->setText("Tx  " + QString::number(_serialPoart->txByte) + " Byte|");

                }
            }
        }
        else
        {
            _currentCommand = nullptr;
            _serialPoart->sendData(ui->lineEdit->text().toLatin1(),false);
            _label_txByte->setText("Tx  " + QString::number(_serialPoart->txByte) + " Byte|");
        }
    }
}

void MainWindow::on_ResetModule_Btn_clicked()
{
    if(_serialPoart->isOpened)
    {

        ui->label_RFFrequency->clear();
        ui->label_TXO->clear();
        ui->label_Version->clear();
        ui->lineEdit_BW->clear();
        ui->lineEdit_RFFrequency->clear();
        ui->lineEdit_TXO->clear();
        ui->lineEdit_SF->clear();
        _luna2CommandSys->init_reset(_currentCommand,1);
    }
}

void MainWindow::on_configure_Btn_clicked()
{
    if(_serialPoart->isOpened)
    {
        if(_serialPoart != nullptr)
        {
            _ConfigCount = 1;
            myTimer2->start(100);
        }
    }
}

void MainWindow::on_LoadConfig_Btn_clicked()
{
    if(_serialPoart->isOpened)
    {
        ui->label_RFFrequency->clear();
        ui->label_TXO->clear();
        ui->lineEdit_BW->clear();
        ui->lineEdit_RFFrequency->clear();
        ui->lineEdit_TXO->clear();
        ui->lineEdit_SF->clear();
        _bufferStr ="";
        _luna2CommandSys->init_reset(_currentCommand,2);
    }
}

void MainWindow::on_openPort_Btn_toggled(bool checked)
{
    if(ui->serialPortAssitant_CB->count() == 0)
    {
        return;
    }
    if(checked)
    {
        _luna2CommandSys = _commandFactory.creatSystem(CommandFactory::COMMANDTYPE::Luna2,_serialPoart);
        int Index = ui->serialPortAssitant_CB->currentIndex();
        int Baud = ui->baud_CB->currentText().toInt();
        int Parity = ui->parity_CB->currentIndex();
        int DataBits = ui->databit_CB->currentIndex();
        int StopBits = ui->stopbit_CB->currentIndex();
        bool isOpen;
        isOpen = _serialPoart->openSerialPort(_serialPortList[Index]);
        if(isOpen)
        {
            _serialPoart->setSerialPortBaudRate(Baud);
            _serialPoart->setSerialPortParity(Parity);
            _serialPoart->setSerialPortDateBits(DataBits);
            _serialPoart->setSerialPortStopBits(StopBits);


            ui->label_RFFrequency->clear();
            ui->label_TXO->clear();
            ui->label_Version->clear();
            ui->lineEdit_BW->clear();
            ui->lineEdit_RFFrequency->clear();
            ui->lineEdit_TXO->clear();
            ui->lineEdit_SF->clear();
            _currentCommand = nullptr;
            _luna2CommandSys->init_reset(_currentCommand,2);

            ui->openPort_Btn->setText("ClosePort");
            ui->serialPortAssitant_CB->setEnabled(false);
            ui->baud_CB->setEnabled(false);
            ui->databit_CB->setEnabled(false);
            ui->parity_CB->setEnabled(false);
            ui->stopbit_CB->setEnabled(false);

        }
        else
        {
            QMessageBox::information(this,tr("Warring"),tr("Please check the comport"));
            ui->openPort_Btn->setChecked(false);
        }
    }
    else
    {
        myTimer2->stop();
        _luna2CommandSys->~AT_commandSystem();
        _serialPoart->closeSerialPort();
        ui->openPort_Btn->setText("OpenPort");
        ui->serialPortAssitant_CB->setEnabled(true);
        ui->baud_CB->setEnabled(true);
        ui->databit_CB->setEnabled(true);
        ui->parity_CB->setEnabled(true);
        ui->stopbit_CB->setEnabled(true);
    }
}

void MainWindow::on_pushButton_clicked()
{
    getSerialPort();
}

void MainWindow::on_clear_Btn_clicked()
{
    _dataStr = "";
    ui->textEdit_printdata->clear();
    _label_txByte->setText("Tx    Byte|");
    _label_rxByte->setText("Rx    Byte");
    if(_serialPoart->isOpened)
    {
        _serialPoart->rxByte = 0;
        _serialPoart->txByte = 0;
    }

}

void MainWindow::on_rssi_Btn_clicked()
{
    if(_serialPoart->isOpened)
    {
        _currentCommand = nullptr;
        _currentCommand = QString::fromStdString(_atCommand.atRssiGet());
        _serialPoart->sendData(_currentCommand,false);
    }
}

void MainWindow::actionSaveLog()
{
    QString  fileName  = QFileDialog ::getSaveFileName(this,QStringLiteral("Save"),
                                                       QStandardPaths ::writableLocation( QStandardPaths :: DocumentsLocation ),
                                                       QStringLiteral("text(*.text)") );
    if  (fileName!= "" )
    {
        QFile file(fileName);

        if (file.open(QIODevice::ReadWrite)) {

            QTextStream out(&file);
            out << ui->textEdit_printdata->toPlainText();
            file.flush();
            file.close();
        }
        else {
            QMessageBox::critical(this, tr("Error"), tr("Non posso salvare il file"));
            return;
        }
    }
}

void MainWindow::actionBaudRate(QAction* ActionCheck)
{
    if (ActionCheck->text() == "1200")
    {
        qDebug() << QString::fromStdString(_atCommand.atBaudeRateSet("1200"));
        _serialPoart->sendData(QString::fromStdString(_atCommand.atBaudeRateSet("1200")),false);
    }
    else if (ActionCheck->text() == "2400")
    {
        qDebug() << QString::fromStdString(_atCommand.atBaudeRateSet("2400"));
        _serialPoart->sendData(QString::fromStdString(_atCommand.atBaudeRateSet("2400")),false);
    }
    else if (ActionCheck->text() == "4800")
    {
        qDebug() << QString::fromStdString(_atCommand.atBaudeRateSet("4800"));
        _serialPoart->sendData(QString::fromStdString(_atCommand.atBaudeRateSet("4800")),false);
    }
    else if (ActionCheck->text() == "9600")
    {
        qDebug() << QString::fromStdString(_atCommand.atBaudeRateSet("9600"));
        _serialPoart->sendData(QString::fromStdString(_atCommand.atBaudeRateSet("9600")),false);
    }
    else if (ActionCheck->text() == "19200")
    {
        qDebug() << QString::fromStdString(_atCommand.atBaudeRateSet("19200"));
        _serialPoart->sendData(QString::fromStdString(_atCommand.atBaudeRateSet("19200")),false);
    }
    else if (ActionCheck->text() == "38400")
    {
        qDebug() << QString::fromStdString(_atCommand.atBaudeRateSet("38400"));
        _serialPoart->sendData(QString::fromStdString(_atCommand.atBaudeRateSet("38400")),false);
    }
    else if (ActionCheck->text() == "57600")
    {
        qDebug() << QString::fromStdString(_atCommand.atBaudeRateSet("57600"));
        _serialPoart->sendData(QString::fromStdString(_atCommand.atBaudeRateSet("57600")),false);
    }
    else if (ActionCheck->text() == "115200")
    {
        qDebug() << QString::fromStdString(_atCommand.atBaudeRateSet("115200"));
        _serialPoart->sendData(QString::fromStdString(_atCommand.atBaudeRateSet("115200")),false);
    }

}

void MainWindow::on_SaveConfig_Btn_clicked()
{
    if(_serialPoart->isOpened)
    {
        _currentCommand = nullptr;
        _currentCommand = QString::fromStdString(_atCommand.atSave());
        _serialPoart->sendData(_currentCommand,false);
    }
}

void MainWindow::on_previousPage_Btn_clicked()
{
    int i;
    i = ui->stackedWidget_luna2->currentIndex();
    ui->stackedWidget_luna2->setCurrentIndex(i-1);
}

void MainWindow::on_nextPage_Btn_clicked()
{
    int i;
    i = ui->stackedWidget_luna2->currentIndex();
    ui->stackedWidget_luna2->setCurrentIndex(i+1);
}

void MainWindow::on_radioButton_luna2_MS_toggled(bool checked)
{
    if(_serialPoart->isOpened)
    {
        ui->defineMS_Btn->setChecked(false);
        if(checked == true)
        {
            ui->defineMS_Btn->setEnabled(true);
            ui->checkBox_luna2_master->setEnabled(true);
            ui->checkBox_luna2_slave->setEnabled(true);
            //        ui->textEdit_luna2_group->setEnabled(true);
            //        ui->textEdit_luna2_udid->setEnabled(true);
            ui->udid_Btn->setEnabled(true);
            ui->defineMS_Btn->setChecked(false);
            _serialPoart->sendData("@AT+MODE=1",false);
        }
        else
        {
            ui->defineMS_Btn->setEnabled(false);
            ui->checkBox_luna2_master->setEnabled(false);
            ui->checkBox_luna2_slave->setEnabled(false);
            //        ui->textEdit_luna2_group->setEnabled(false);
            //        ui->textEdit_luna2_udid->setEnabled(false);
            ui->udid_Btn->setEnabled(false);
        }
    }

}

void MainWindow::on_checkBox_luna2_master_toggled(bool checked)
{
    if(_serialPoart->isOpened)
    {
        ui->defineMS_Btn->setChecked(false);
        if(checked == true)
        {
            ui->checkBox_luna2_slave->setCheckState(Qt::CheckState::Unchecked);
            ui->textEdit_luna2_group->setEnabled(true);
            ui->lineEdit_luna2_udid->setEnabled(true);
        }
        else
        {
            ui->textEdit_luna2_group->setEnabled(false);
            ui->lineEdit_luna2_udid->setEnabled(false);
        }
    }
}

void MainWindow::on_checkBox_luna2_slave_toggled(bool checked)
{
    if(_serialPoart->isOpened)
    {
        ui->defineMS_Btn->setChecked(false);
        if(checked == true)
        {
            ui->checkBox_luna2_master->setCheckState(Qt::CheckState::Unchecked);
        }
    }
}

void MainWindow::on_radioButton_luna2_UDID_toggled(bool checked)
{
    if(_serialPoart->isOpened)
    {
        if(checked == true)
        {
            ui->lineEdit_luna2_udid->setEnabled(true);
            ui->udid_Btn->setEnabled(true);
            _serialPoart->sendData("@AT+MODE=0",false);
            ui->spinBox_luna2Group->setValue(0);
        }
        else
        {

            ui->lineEdit_luna2_udid->setEnabled(false);
            ui->udid_Btn->setEnabled(false);
        }
    }
}

void MainWindow::on_udid_Btn_clicked()
{
    if(ui->lineEdit_luna2_udid->text() != "")
    {
        _UDID = ui->lineEdit_luna2_udid->text().toLatin1();
        ui->lineEdit_luna2_udid->setCompleter(_UDIDCompleter);
        QString txt = _UDIDCompleter->currentCompletion();
        if(txt == "")
        {
            _word_UDID_List<<ui->lineEdit_luna2_udid->text();
            _UDIDCompleter->setModel(new QStringListModel(_word_UDID_List, this));
        }

    }
}


void MainWindow::on_defineMS_Btn_toggled(bool checked)
{
    if(!ui->checkBox_luna2_master->isChecked() && !ui->checkBox_luna2_slave->isChecked())
    {
        QMessageBox::information(this,tr("Warring"),tr("Please check select"));
        //                ui->defineMS_Btn->setChecked(false);
        return;
    }
    else if((ui->checkBox_luna2_slave->isChecked()) && (ui->spinBox_luna2Group->value() == 0))
    {
        QMessageBox::information(this,tr("Warring"),tr("Slave's group does not equal 0"));
        //                ui->defineMS_Btn->setChecked(false);
        return;
    }
    if(checked)
    {
        ui->checkBox_luna2_master->setEnabled(false);
        ui->checkBox_luna2_slave->setEnabled(false);
        ui->spinBox_luna2Group->setEnabled(false);
        _luna2Griup = ui->spinBox_luna2Group->value();

        if(ui->checkBox_luna2_master->isChecked())
        {
            _serialPoart->sendData("@AT+GROUP=0",false);
            ui->spinBox_luna2Group->setValue(0);
        }
        else if(ui->checkBox_luna2_slave->isChecked())
        {
            _serialPoart->sendData("@AT+GROUP="+QString::number(_luna2Griup),false);
        }
        ui->defineMS_Btn->setText("unlock");
    }
    else
    {
        ui->checkBox_luna2_master->setEnabled(true);
        ui->checkBox_luna2_slave->setEnabled(true);
        ui->spinBox_luna2Group->setEnabled(true);
        ui->defineMS_Btn->setText("lock");
    }
}

void MainWindow::on_radioButton_luna2_PASS_toggled(bool checked)
{
    if(_serialPoart->isOpened)
    {
        if(checked)
        {
            _serialPoart->sendData("@AT+MODE=0",false);
            //        _serialPoart->sendData("@AT+GROUP=0",false);
            ui->spinBox_luna2Group->setValue(0);
        }
    }
}

void MainWindow::on_actionSaveBaudRate_triggered()
{

    //    _serialPoart->sendData(QString::fromStdString(_atCommand.atSave()),false);
    _currentCommand = nullptr;
    _luna2CommandSys->init_baudRate(_currentCommand,1);
    //    _serialPoart->closeSerialPort();
    //    ui->openPort_Btn->setText("OpenPort");
    //    ui->serialPortAssitant_CB->setEnabled(true);
    //    ui->baud_CB->setEnabled(true);
    //    ui->databit_CB->setEnabled(true);
    //    ui->parity_CB->setEnabled(true);
    //    ui->stopbit_CB->setEnabled(true);
}

void MainWindow::on_textEdit_printdata_textChanged()
{
//    _serialPoart->sendData(ui->lineEdit->text().toLatin1(),false);
//    _label_txByte->setText("Tx  " + QString::number(_serialPoart->txByte) + " Byte|");
}
