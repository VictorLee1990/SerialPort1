#ifndef LUNA2_COMMANDSYSTEM_H
#define LUNA2_COMMANDSYSTEM_H
#include "serialport.h"
#include <QTimer>
#include "at_command.h"
#include "at_commandsystem.h"
#include <QObject>
#include <QThread>
#include <QCursor>
class Luna2_CommandSystem:public AT_commandSystem
{

public:
    Luna2_CommandSystem(SerialPort *SerialPort);
    virtual ~Luna2_CommandSystem();
    virtual void init_reset(QString &CurrentCommand, int _count);
    virtual void configure(QString &CurrentCommand,int count);
    virtual void saveConfigure();
    virtual void init_baudRate(QString &CurrentCommand, int count);
private slots:
    virtual void resetCase();
    virtual void configureCase(QString CommandStr, int _ConfigCount);
    virtual void baudRateSaveCase();
private:
    SerialPort *_serialPort;
    AT_Command _atCommand;
    QString *_currentCommand;
    int _count;
    int _ConfigCount;
    QTimer *_myTimer;
      QTimer *_myTimer2;
};

#endif // LUNA2_COMMANDSYSTEM_H
