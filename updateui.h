#ifndef UPDATEUI_H
#define UPDATEUI_H

#include <QWidget>
#include "xmodem.h"
#include <QFileDialog>
#include <QDesktopServices>
#include <QEventLoop>
#include <QTimer>
#include "serialport.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QListWidget>
#include <QList>
namespace Ui {
class UpdateUI;
}

class UpdateUI : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateUI(QWidget *parent = nullptr);
    ~UpdateUI();
    void setSerialPort(QSerialPort *sp,SerialPort *serialPort,QSerialPortInfo serialPortInfo);
    QThread *_updateThread;
public slots:
    void setProgressBar(double count);

private slots:
    void on_Update_Btn_clicked();
    void updateProgram(QString fileName);
    void on_Cancel_Btn_clicked();

signals:
    void updateSignal(QString fileName);
      void quitSignal();
private:
    Ui::UpdateUI *ui;
    XMODEM *_xmodem;
    QSerialPort *_sp;
    SerialPort *_serialPort;
    QSerialPortInfo _srialPortInfo;
};

#endif // UPDATEUI_H
