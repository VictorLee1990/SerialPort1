#ifndef AT_COMMANDSYSTEM_H
#define AT_COMMANDSYSTEM_H

#include "at_command.h"
#include <QObject>
class  AT_commandSystem:public QObject
{
Q_OBJECT
public:
    AT_commandSystem();
    virtual ~AT_commandSystem();
    virtual void init_reset(QString &CurrentCommand, int count) = 0;
    virtual void configure(QString &CurrentCommand,int count) =0;
    virtual void saveConfigure() =0;
    virtual void init_baudRate(QString &CurrentCommand, int count) =0;
    int conut;
private slots:
    virtual void resetCase() = 0;
    virtual void configureCase(QString CommandStr,int ConfigCount) = 0;
    virtual void baudRateSaveCase() =0;

private:



};

#endif // AT_COMMANDSYSTEM_H
