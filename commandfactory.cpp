#include "commandfactory.h"

CommandFactory::CommandFactory()
{

}

AT_commandSystem *CommandFactory::creatSystem(COMMANDTYPE CommandType, SerialPort *SerialPort)
{
    AT_commandSystem* CommandSys = NULL;

    switch (CommandType)
    {
    case Luna2:
        CommandSys = new Luna2_CommandSystem(SerialPort);
        break;
    default:
        break;
    }

    return CommandSys;
}
