#ifndef SYSTEM_H
#define SYSTEM_H
#include <QObject>
#include "serialport.h"
#include <thread>
class SerialPort;
class System: public QObject
{
    Q_OBJECT
signals:
    void updateTextEditSignal(QString DataStr, bool HexSend);
public slots:
    System();
    bool openSerialPort(int *SerialPortInfo);
public:
private:
    SerialPort *_serialPort;
    std::thread *_mthread;


};

#endif // SYSTEM_H
