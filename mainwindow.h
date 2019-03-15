#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "serialport.h"
#include <QMessageBox>
#include <QObject>
#include "at_command.h"
#include <thread>
#include <QTimer>
//#include "testthread.h"
//#include "systemap.h"
#include <regex>
#include <QFileDialog>
#include <QDesktopServices>
#include <QTextStream>
#include "at_commandsystem.h"
#include "commandfactory.h"
#include <QCompleter>
#include <QLineEdit>
#include <QStringListModel>
#include <QShortcut>
#include <QKeySequence>
#include <QActionGroup>
#include <QListWidget>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void getSerialPort();
signals:

public slots:
    void updateTextEdit(QString DataStr, bool HexSend);
    void configure();
    void on_clear_Btn_clicked();
    void on_rssi_Btn_clicked();
    void actionSaveLog();
    void actionBaudRate(QAction *ActionCheck);
private slots:

    void on_SendData_Btn_clicked();

    void on_ResetModule_Btn_clicked();

    void on_configure_Btn_clicked();

    void on_LoadConfig_Btn_clicked();

    void on_openPort_Btn_toggled(bool checked);

    void on_pushButton_clicked();



    void on_SaveConfig_Btn_clicked();

    void on_previousPage_Btn_clicked();

    void on_nextPage_Btn_clicked();

    void on_radioButton_luna2_MS_toggled(bool checked);

    void on_checkBox_luna2_master_toggled(bool checked);

    void on_checkBox_luna2_slave_toggled(bool checked);

    void on_radioButton_luna2_UDID_toggled(bool checked);

    void on_udid_Btn_clicked();

    void on_defineMS_Btn_toggled(bool checked);

    void on_radioButton_luna2_PASS_toggled(bool checked);





    void on_actionSaveBaudRate_triggered();

    void on_textEdit_printdata_textChanged();

private:
    Ui::MainWindow *ui;
    SerialPort *_serialPoart = nullptr;
    AT_Command _atCommand;
    QList<QSerialPortInfo> _serialPortList;
    QString _currentCommand;
    std::thread *_stateThread;
    int _srieal;
    QTimer *myTimer2;
    int _ConfigCount;
    QString _bufferStr;
    QString _dataStr;
    QLabel *_label_rxByte;
    QLabel *_label_txByte;
    QPushButton *_clear_Btn;
    QPushButton *_rssi_Btn;
     QLabel *_label_rssi;
     CommandFactory _commandFactory;
     AT_commandSystem *_luna2CommandSys;
      QString _UDID;
    int _luna2Griup;
    QStringList _wordList;
      QStringList _word_UDID_List;
     QLineEdit *lineEdit;
      QCompleter *_wordCompleter;
      QCompleter *_UDIDCompleter;
      QShortcut *_shortEnter;
      QActionGroup *_baudRateGroup;
};

#endif // MAINWINDOW_H
