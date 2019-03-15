#include "luna2_commandsystem.h"

Luna2_CommandSystem::Luna2_CommandSystem(SerialPort *SerialPort)
{
    _serialPort = SerialPort;
    _myTimer = new QTimer();
    QObject::connect(_myTimer,SIGNAL(timeout()),this,SLOT(resetCase()));
    _myTimer2 = new QTimer();
    QObject::connect(_myTimer2,SIGNAL(timeout()),this,SLOT(baudRateSaveCase()));
}

Luna2_CommandSystem::~Luna2_CommandSystem()
{
    _myTimer->stop();
    _myTimer2->stop();
}

void Luna2_CommandSystem::init_reset(QString &CurrentCommand,int count)
{
    _count = count;
    _currentCommand = &CurrentCommand;
    _myTimer->start(6000);
}

void Luna2_CommandSystem::configure(QString &CurrentCommand,int count)
{
    _ConfigCount = count;
    _currentCommand = &CurrentCommand;
    configureCase(*_currentCommand,_ConfigCount);
}

void Luna2_CommandSystem::resetCase()
{
    switch(_count)
    {
    case 1:

        *_currentCommand = _atCommand.atReset();
        _serialPort->sendData(*_currentCommand,false);
        _count++;
        break;
    case 2:
            _myTimer->stop();
            _myTimer->start(400);
        *_currentCommand = _atCommand.atRFFrequencyGet();
        _serialPort->sendData(*_currentCommand,false);      
        _count++;
        break;
    case 3:
        *_currentCommand = _atCommand.atOutputPowerGet();
        _serialPort->sendData(*_currentCommand,false);
        _count++;
        break;
    case 4:
        *_currentCommand = _atCommand.atBandWidthGet();
        _serialPort->sendData(*_currentCommand,false);
        _count++;
        break;
    case 5:
        *_currentCommand = _atCommand.atSpreadingFactorGet();
        _serialPort->sendData(*_currentCommand,false);
        _count++;
        break;
    case 6:
        *_currentCommand = _atCommand.atBaudRateGet();
        _serialPort->sendData(*_currentCommand,false);
        _myTimer->stop();
        break;
    }
}

void Luna2_CommandSystem::configureCase(QString CommandStr,int _ConfigCount)
{
    switch(_ConfigCount)
    {
    case 1:
        *_currentCommand = CommandStr;
        _serialPort->sendData(*_currentCommand,false);
        break;
    case 2:
        *_currentCommand = CommandStr;
        _serialPort->sendData(*_currentCommand,false);
        break;
    case 3:
        *_currentCommand = CommandStr;
        _serialPort->sendData(*_currentCommand,false);
        break;
    case 4:
        *_currentCommand = CommandStr;
        _serialPort->sendData(*_currentCommand,false);
        break;
    }
}

void Luna2_CommandSystem::saveConfigure()
{
    _currentCommand = nullptr;
    *_currentCommand = QString::fromStdString(_atCommand.atSave());
    _serialPort->sendData(*_currentCommand,false);
}

void Luna2_CommandSystem::init_baudRate(QString &CurrentCommand, int count)
{
    _count = count;
    _currentCommand = &CurrentCommand;
    _myTimer2->start(2000);
}

void Luna2_CommandSystem::baudRateSaveCase()
{
    switch(_count)
    {
    case 1:
        *_currentCommand = _atCommand.atSave();
        _serialPort->sendData(*_currentCommand,false);
        _count++;
        break;
    case 2:
        *_currentCommand = _atCommand.atReset();
        _serialPort->sendData(*_currentCommand,false);
        _myTimer2->stop();
        break;

    }
}
