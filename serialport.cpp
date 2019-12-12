#include "serialport.h"
#include <qobject.h>
#include <qdebug.h>
#include <QDebug>
#include <QThread>
SerialPort::SerialPort()
{
    rxByte = 0;
    txByte = 0;
    isOpened = false;
}

QList<QSerialPortInfo> SerialPort::getSerialPortID()
{
    serialInfo = new QSerialPortInfo();
    serialList = serialInfo->availablePorts();
//        int nSerialnum = serialList.length();
//        for(int i=0;i<nSerialnum;i++)
//        {
//            QString serialName = serialList[i].portName();
//            QString serialDesp = serialList[i].description();
//            //		serialPortAssitant.serialPortcomboBox->addItem(serialName);
//        }
    return serialList;
    //	QString currentPort=serialPortAssitant.serialPortcomboBox->currentText();
    //	portToOpen=currentPort;
    //	QString  portStatus=currentPort+" closed";
    //	serialPortAssitant.status->statusInfo->setText(portStatus.toUpper());
    //	QPalette font_palette;
    //	font_palette.setColor(QPalette::WindowText,Qt::red);
    //	serialPortAssitant.status->statusInfo->setPalette(font_palette);
}

bool SerialPort::openSerialPort(QSerialPortInfo SerialPortInfo)
{
    serial = new QSerialPort();
    serial->setPort(SerialPortInfo);
    isOpened = serial->open(QIODevice::ReadWrite);
    if(isOpened)
    {
        //        serial->open(QIODevice::ReadWrite);
        //         connect(serial, &QSerialPort::readyRead, this,SLOT(readData));

        serial->setFlowControl(QSerialPort::NoFlowControl);
        connect(this->serial,SIGNAL(readyRead()), this,SLOT(readData()));
//        disconnect(this->serial,SIGNAL(readyRead()), this,SLOT(readData()));
        return true;
    }
    else
    {
        serial = nullptr;
        delete serial;
        return false;
    }
}

void SerialPort::setSerialPortBaudRate(int BaudRate)
{
    switch (BaudRate) {
    case 1200:
        serial->setBaudRate(QSerialPort::Baud1200);
        break;
    case 2400:
        serial->setBaudRate(QSerialPort::Baud2400);
        break;
    case 4800:
        serial->setBaudRate(QSerialPort::Baud4800);
        break;
    case 9600:
        serial->setBaudRate(QSerialPort::Baud9600);
        break;
    case 19200:
        serial->setBaudRate(QSerialPort::Baud19200);
        break;
    case 38400:
        serial->setBaudRate(QSerialPort::Baud38400);
        break;
    case 57600:
        serial->setBaudRate(QSerialPort::Baud57600);
        break;
    case 115200:
        serial->setBaudRate(QSerialPort::Baud115200);
        break;
    default:
        break;
    }
    qDebug()<<serial->baudRate();
    qDebug();
}

void SerialPort::setSerialPortParity(int PortParity)
{
    switch (PortParity) {
    case 1:
        serial->setParity(QSerialPort::NoParity);
        break;
    case 2:
        serial->setParity(QSerialPort::EvenParity);
        break;
    case 3:
        serial->setParity(QSerialPort::OddParity);
        break;
    case 4:
        serial->setParity(QSerialPort::SpaceParity);
        break;
    case 5:
        serial->setParity(QSerialPort::MarkParity);
        break;
    default:
        break;
    }

}

void SerialPort::setSerialPortDateBits(int DataBits)
{
    switch (DataBits) {
    case 0:
        serial->setDataBits(QSerialPort::Data8);
        break;
    case 1:
        serial->setDataBits(QSerialPort::Data7);
        break;
    case 2:
        serial->setDataBits(QSerialPort::Data6);
        break;
    case 3:
        serial->setDataBits(QSerialPort::Data5);
        break;
    default:
        break;
    }
    qDebug()<<serial->dataBits();
}

void SerialPort::setSerialPortStopBits(int StopBits)
{
    switch (StopBits) {
    case 0:
        serial->setStopBits(QSerialPort::OneStop);
        break;
    case 1:
        serial->setStopBits(QSerialPort::OneAndHalfStop);
        break;
    case 2:
        serial->setStopBits(QSerialPort::TwoStop);
        break;
    default:
        break;
    }
    qDebug()<<serial->stopBits();
}

bool SerialPort::closeSerialPort()
{
    if(serial != nullptr)
    {
        if(serial->isOpen() == true)
        {
            serial->close();
            serial = nullptr;
            delete serial;
            isOpened = false;
            return isOpened;
        }
    }
     return false;

}

void SerialPort::sendData(QString DataStr, bool HexSend)
{

    if(serial->isOpen() == true)
    {
        if(!HexSend)
        {
            serial->write(DataStr.toLatin1());
            txByte += DataStr.toLatin1().count();
        }
        else
        {
            int num = DataStr.toInt();
            DataStr = DataStr.setNum(num, 16);
            serial->write(DataStr.toLatin1());
            txByte += DataStr.toLatin1().count();
        }
    }
}

QSerialPort *SerialPort::getSerialPort()
{
    return serial;
}

QString SerialPort::readData()
{
    QByteArray buffer;
    QString DataStr;
    HexSend = false;
    buffer = serial->readAll();
    if(!buffer.isEmpty())
    {

        if(!HexSend)
        {
            DataStr = buffer;

            rxByte += buffer.count();
        }
        else
        {
            QByteArray temp = buffer.toHex().toUpper();
            DataStr = temp;
            rxByte += temp.count();
        }
        emit(updateTextEditSignal(DataStr,HexSend));

        buffer.clear();
        return DataStr;
    }
}
