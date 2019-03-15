#include "at_command.h"

AT_Command::AT_Command()
{

}

const char* AT_Command::atReset()
{
    return AT AT_RESET;
}

const char *AT_Command::atRFFrequencyGet()
{
    return AT AT_RFFREQ"=?";
}

std::string AT_Command::atRFFrequencySet(std::string Frequency)
{
    std::string str;
    str = AT AT_RFFREQ"=";
    str += Frequency;
    return str;
}

const char *AT_Command::atOutputPowerGet()
{
    return AT AT_TXO"=?";
}

std::string AT_Command::atOutputPowerSet(std::string TXO)
{
    std::string str;
    str = AT AT_TXO"=";
    str += TXO;
    return str;
}

const char *AT_Command::atBandWidthGet()
{
    return AT AT_BW"=?";
}

std::string AT_Command::atBandWidthSet(std::string BW)
{
    std::string str;
    str = AT AT_BW"=";
    str += BW;
    return str;

}

const char *AT_Command::atRssiGet()
{
    return AT AT_RSSI"=?";
}

const char *AT_Command::atSpreadingFactorGet()
{
    return AT AT_SF"=?";
}

std::string AT_Command::atSpreadingFactorSet(std::string SF)
{
    std::string str;
    str = AT AT_SF"=";
    str += SF;
    return str;
}

const char *AT_Command::atBaudRateGet()
{
     return AT AT_BAUDRATE"=?";
}

std::string AT_Command::atBaudeRateSet(std::string BaudeRate)
{
    std::string str;
    str = AT AT_BAUDRATE"=";
    str += BaudeRate;
    return str;
}

const char *AT_Command::atSave()
{
    return AT AT_SAVE;
}


