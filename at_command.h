#ifndef AT_COMMAND_H
#define AT_COMMAND_H
#define AT            "@AT"
#define AT_RESET      "Z"
#define AT_RFFREQ     "+FREQ"
#define AT_TXO        "+TXO"
#define AT_BW         "+BW"
#define AT_SF         "+SF"
#define AT_SENDB      "+SENDB"
#define AT_SEND       "+SEND"
#define AT_RECVB      "+RECVB"
#define AT_RECV       "+RECV"
#define AT_VER        "+VER"
#define AT_SNR        "+SNR"
#define AT_RSSI       "+RSSI"
#define AT_SAVE       "+SAVE"
#define AT_BAUDRATE   "+BAUDRATE"
#include <QString>
#include <string>
class AT_Command
{
public:
    AT_Command();
    const char* atReset();
    const char* atRFFrequencyGet();
    std::string atRFFrequencySet(std::string Frequency);
    const char* atOutputPowerGet();
    std::string atOutputPowerSet(std::string TXO);
    const char* atBandWidthGet();
    std::string atBandWidthSet(std::string BW);
    const char* atRssiGet();
    const char* atSpreadingFactorGet();
    std::string atSpreadingFactorSet(std::string SF);
    const char* atBaudRateGet();
    std::string atBaudeRateSet(std::string BaudeRate);
    const char* atSave();


};

#endif // AT_COMMAND_H
