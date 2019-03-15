//#include "systemap.h"

//SystemAP::SystemAP()
//{
//    _serialPort = new SerialPort();
//    _mthread = new std::thread();
//    _testthread = new testthread();

//}

//bool SystemAP::openSerialPort(QSerialPortInfo SerialPortInfo)
//{      int a;
////       std::thread _mthread(&SerialPort::openSerialPort,*_serialPort,SerialPortInfo);
////      connect(_serialPort->serial,SIGNAL(readyRead()),_serialPort,SLOT(readData()));
////          _mthread.join();
//             return 0;

//}

//void SystemAP::setSerialPortBaudRate(int BaudRate)
//{
//    //   new std::thread(&SerialPort::setSerialPortBaudRate,*_serialPort,BaudRate);
////    std::thread _mthread(&SerialPort::setSerialPortBaudRate,*_serialPort,BaudRate);
////    _mthread.join();
//}

//void SystemAP::setSerialPortParity(int PortParity)
//{
////    std::thread _mthread(&SerialPort::setSerialPortParity,*_serialPort,PortParity);
////    _mthread.join();
//    //    _serialPort->setSerialPortParity(PortParity);
//}

//void SystemAP::setSerialPortDateBits(int DataBits)
//{
////    std::thread _mthread(&SerialPort::setSerialPortDateBits,*_serialPort,DataBits);
////    _mthread.join();
//    //    _serialPort->setSerialPortDateBits(DataBits);
//}

//void SystemAP::setSerialPortStopBits(int StopBits)
//{
////    std::thread _mthread(&SerialPort::setSerialPortStopBits,*_serialPort,StopBits);
////    _mthread.join();
//    //    _serialPort->setSerialPortStopBits(StopBits);
//}

//void SystemAP::closeSerialPort()
//{
////    std::thread _mthread(&SerialPort::closeSerialPort,*_serialPort);
////    _mthread.join();
//    //    _serialPort->closeSerialPort();
//}

//void SystemAP::sendData(QString Data, bool HexSend)
//{
////    std::thread _mthread(&SerialPort::sendData,*_serialPort,Data,HexSend);
////    _mthread.join();
//    //    _serialPort->sendData(Data,HexSend);
//}
