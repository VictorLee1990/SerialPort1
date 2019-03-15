#ifndef COMMANDFACTORY_H
#define COMMANDFACTORY_H
#include "at_commandsystem.h"
#include "luna2_commandsystem.h"
class CommandFactory
{
public:
     enum COMMANDTYPE{Luna2,NONE};
    CommandFactory();
    AT_commandSystem* creatSystem(COMMANDTYPE CommandType,SerialPort *SerialPort);
};

#endif // COMMANDFACTORY_H
