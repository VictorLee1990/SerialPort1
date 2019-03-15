#include "system.h"

System::System()
{
    _serialPort = new SerialPort();
    _mthread = new std::thread();
}

bool System::openSerialPort(int *SerialPortInfo)
{
//      _mthread = new std::thread(&SerialPort::openserial,*_serialPort,&SerialPortInfo);
   return 0;
}
