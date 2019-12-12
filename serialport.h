#ifndef SERIALPORT_H
#define SERIALPORT_H
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QObject>
class SerialPort: public QObject
{
Q_OBJECT
public:
     SerialPort();
signals:
    void updateTextEditSignal(QString DataStr, bool HexSend);
public slots:

    QString readData();
public:
//    SerialPort();
    QList<QSerialPortInfo> getSerialPortID();
    bool openSerialPort(QSerialPortInfo SerialPortInfo);
    void setSerialPortBaudRate(int BaudRate);
    void setSerialPortParity(int PortParity);
    void setSerialPortDateBits(int DataBits);
    void setSerialPortStopBits(int StopBits);
    bool closeSerialPort(void);
    void sendData(QString Data, bool HexSend);
    QSerialPort* getSerialPort();
    int rxByte;
    int txByte;
    bool isOpened;
private:
    QSerialPort* serial;
    QSerialPortInfo* serialInfo;
    QList<QSerialPortInfo> serialList;

    bool HexSend;
};

#endif // SERIALPORT_H
