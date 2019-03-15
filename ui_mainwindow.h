/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_log;
    QAction *action2400;
    QAction *action4800;
    QAction *action9600;
    QAction *action14400;
    QAction *action19200;
    QAction *action38400;
    QAction *action57600;
    QAction *action115200;
    QAction *actionSaveBaudRate;
    QAction *action1200;
    QWidget *centralWidget;
    QGroupBox *SerialPort;
    QGridLayout *gridLayout_3;
    QComboBox *parity_CB;
    QPushButton *openPort_Btn;
    QComboBox *baud_CB;
    QComboBox *databit_CB;
    QLabel *label_parity;
    QComboBox *stopbit_CB;
    QLabel *label_stopbit;
    QLabel *label_databit;
    QLabel *label_com;
    QComboBox *serialPortAssitant_CB;
    QLabel *label_baund;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *SendData_Btn;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_Version;
    QLabel *label_RFFrequency;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_TXO;
    QLabel *label_6;
    QTextEdit *textEdit_printdata;
    QLabel *moduleInfo_label;
    QGroupBox *groupBox_3;
    QStackedWidget *stackedWidget_luna2;
    QWidget *page_0;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_4;
    QPushButton *LoadConfig_Btn;
    QPushButton *configure_Btn;
    QPushButton *ResetModule_Btn;
    QSplitter *splitter_5;
    QSplitter *splitter_4;
    QLabel *label_RFFrequency_2;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_8;
    QSplitter *splitter_2;
    QComboBox *comboBox_RFFrequency;
    QComboBox *comboBox_TXO;
    QComboBox *comboBox_BW;
    QComboBox *comboBox_SF;
    QGroupBox *groupBox_5;
    QSplitter *splitter_7;
    QSplitter *splitter_6;
    QLabel *label_RFFrequency_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QSplitter *splitter;
    QLineEdit *lineEdit_RFFrequency;
    QLineEdit *lineEdit_TXO;
    QLineEdit *lineEdit_BW;
    QLineEdit *lineEdit_SF;
    QPushButton *SaveConfig_Btn;
    QWidget *page_1;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLineEdit *lineEdit_luna2_udid;
    QPushButton *udid_Btn;
    QFormLayout *formLayout;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QTextEdit *textEdit_luna2_group;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioButton_luna2_PASS;
    QRadioButton *radioButton_luna2_UDID;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_luna2_MS;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_luna2_master;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_luna2_slave;
    QSpinBox *spinBox_luna2Group;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *defineMS_Btn;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_5;
    QPushButton *nextPage_Btn;
    QPushButton *previousPage_Btn;
    QPushButton *pushButton;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_4;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_5;
    QWidget *layoutWidget8;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuBaudRate;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(545, 480);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(545, 480));
        MainWindow->setMaximumSize(QSize(545, 480));
        actionSave_log = new QAction(MainWindow);
        actionSave_log->setObjectName(QStringLiteral("actionSave_log"));
        actionSave_log->setCheckable(false);
        action2400 = new QAction(MainWindow);
        action2400->setObjectName(QStringLiteral("action2400"));
        action2400->setCheckable(true);
        action4800 = new QAction(MainWindow);
        action4800->setObjectName(QStringLiteral("action4800"));
        action4800->setCheckable(true);
        action9600 = new QAction(MainWindow);
        action9600->setObjectName(QStringLiteral("action9600"));
        action9600->setCheckable(true);
        action14400 = new QAction(MainWindow);
        action14400->setObjectName(QStringLiteral("action14400"));
        action14400->setCheckable(true);
        action19200 = new QAction(MainWindow);
        action19200->setObjectName(QStringLiteral("action19200"));
        action19200->setCheckable(true);
        action38400 = new QAction(MainWindow);
        action38400->setObjectName(QStringLiteral("action38400"));
        action38400->setCheckable(true);
        action57600 = new QAction(MainWindow);
        action57600->setObjectName(QStringLiteral("action57600"));
        action57600->setCheckable(true);
        action115200 = new QAction(MainWindow);
        action115200->setObjectName(QStringLiteral("action115200"));
        action115200->setCheckable(true);
        actionSaveBaudRate = new QAction(MainWindow);
        actionSaveBaudRate->setObjectName(QStringLiteral("actionSaveBaudRate"));
        action1200 = new QAction(MainWindow);
        action1200->setObjectName(QStringLiteral("action1200"));
        action1200->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SerialPort = new QGroupBox(centralWidget);
        SerialPort->setObjectName(QStringLiteral("SerialPort"));
        SerialPort->setGeometry(QRect(390, 10, 141, 203));
        SerialPort->setMinimumSize(QSize(141, 0));
        SerialPort->setMaximumSize(QSize(141, 221));
        gridLayout_3 = new QGridLayout(SerialPort);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        parity_CB = new QComboBox(SerialPort);
        parity_CB->addItem(QString());
        parity_CB->addItem(QString());
        parity_CB->addItem(QString());
        parity_CB->addItem(QString());
        parity_CB->addItem(QString());
        parity_CB->setObjectName(QStringLiteral("parity_CB"));

        gridLayout_3->addWidget(parity_CB, 2, 1, 1, 1);

        openPort_Btn = new QPushButton(SerialPort);
        openPort_Btn->setObjectName(QStringLiteral("openPort_Btn"));
        openPort_Btn->setMinimumSize(QSize(0, 0));
        openPort_Btn->setMouseTracking(false);
        openPort_Btn->setStyleSheet(QStringLiteral(""));
        openPort_Btn->setCheckable(true);
        openPort_Btn->setAutoDefault(false);
        openPort_Btn->setFlat(false);

        gridLayout_3->addWidget(openPort_Btn, 5, 1, 1, 1);

        baud_CB = new QComboBox(SerialPort);
        baud_CB->addItem(QString());
        baud_CB->addItem(QString());
        baud_CB->addItem(QString());
        baud_CB->addItem(QString());
        baud_CB->addItem(QString());
        baud_CB->addItem(QString());
        baud_CB->addItem(QString());
        baud_CB->addItem(QString());
        baud_CB->setObjectName(QStringLiteral("baud_CB"));

        gridLayout_3->addWidget(baud_CB, 1, 1, 1, 1);

        databit_CB = new QComboBox(SerialPort);
        databit_CB->addItem(QString());
        databit_CB->addItem(QString());
        databit_CB->addItem(QString());
        databit_CB->addItem(QString());
        databit_CB->setObjectName(QStringLiteral("databit_CB"));

        gridLayout_3->addWidget(databit_CB, 3, 1, 1, 1);

        label_parity = new QLabel(SerialPort);
        label_parity->setObjectName(QStringLiteral("label_parity"));
        label_parity->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_parity, 2, 0, 1, 1);

        stopbit_CB = new QComboBox(SerialPort);
        stopbit_CB->addItem(QString());
        stopbit_CB->addItem(QString());
        stopbit_CB->addItem(QString());
        stopbit_CB->setObjectName(QStringLiteral("stopbit_CB"));

        gridLayout_3->addWidget(stopbit_CB, 4, 1, 1, 1);

        label_stopbit = new QLabel(SerialPort);
        label_stopbit->setObjectName(QStringLiteral("label_stopbit"));
        label_stopbit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_stopbit, 4, 0, 1, 1);

        label_databit = new QLabel(SerialPort);
        label_databit->setObjectName(QStringLiteral("label_databit"));
        label_databit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_databit, 3, 0, 1, 1);

        label_com = new QLabel(SerialPort);
        label_com->setObjectName(QStringLiteral("label_com"));
        label_com->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_com, 0, 0, 1, 1);

        serialPortAssitant_CB = new QComboBox(SerialPort);
        serialPortAssitant_CB->setObjectName(QStringLiteral("serialPortAssitant_CB"));
        serialPortAssitant_CB->setEnabled(true);

        gridLayout_3->addWidget(serialPortAssitant_CB, 0, 1, 1, 1);

        label_baund = new QLabel(SerialPort);
        label_baund->setObjectName(QStringLiteral("label_baund"));
        label_baund->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_baund, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(390, 220, 141, 51));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 20, 83, 16));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(70, 20, 83, 16));
        SendData_Btn = new QPushButton(centralWidget);
        SendData_Btn->setObjectName(QStringLiteral("SendData_Btn"));
        SendData_Btn->setGeometry(QRect(310, 240, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 1, 371, 231));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFocusPolicy(Qt::NoFocus);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QStringLiteral(""));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 351, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_Version = new QLabel(layoutWidget1);
        label_Version->setObjectName(QStringLiteral("label_Version"));

        verticalLayout->addWidget(label_Version);

        label_RFFrequency = new QLabel(layoutWidget1);
        label_RFFrequency->setObjectName(QStringLiteral("label_RFFrequency"));

        verticalLayout->addWidget(label_RFFrequency);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_TXO = new QLabel(layoutWidget1);
        label_TXO->setObjectName(QStringLiteral("label_TXO"));

        verticalLayout_2->addWidget(label_TXO);


        horizontalLayout->addLayout(verticalLayout_2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 0, 371, 61));
        label_6->setStyleSheet(QStringLiteral("border: 3px solid rgb(85, 255, 255);border-radius:8px;selection-background-color: rgb(85, 255, 255);"));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        textEdit_printdata = new QTextEdit(layoutWidget);
        textEdit_printdata->setObjectName(QStringLiteral("textEdit_printdata"));
        textEdit_printdata->setMaximumSize(QSize(16777215, 160));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(81, 81, 81, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        textEdit_printdata->setPalette(palette);
        textEdit_printdata->setMouseTracking(true);
        textEdit_printdata->setContextMenuPolicy(Qt::NoContextMenu);
        textEdit_printdata->setStyleSheet(QLatin1String("background-color: rgb(81, 81, 81);\n"
"color: rgb(255, 255, 255);"));
        textEdit_printdata->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        textEdit_printdata->setUndoRedoEnabled(false);
        textEdit_printdata->setReadOnly(true);
        textEdit_printdata->setCursorWidth(0);
        textEdit_printdata->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(textEdit_printdata, 2, 0, 1, 1);

        moduleInfo_label = new QLabel(centralWidget);
        moduleInfo_label->setObjectName(QStringLiteral("moduleInfo_label"));
        moduleInfo_label->setGeometry(QRect(570, 350, 369, 53));
        moduleInfo_label->setSizeIncrement(QSize(0, 0));
        moduleInfo_label->setBaseSize(QSize(0, 0));
        moduleInfo_label->setFrameShape(QFrame::Box);
        moduleInfo_label->setFrameShadow(QFrame::Plain);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 270, 521, 171));
        stackedWidget_luna2 = new QStackedWidget(groupBox_3);
        stackedWidget_luna2->setObjectName(QStringLiteral("stackedWidget_luna2"));
        stackedWidget_luna2->setEnabled(true);
        stackedWidget_luna2->setGeometry(QRect(-10, 10, 511, 171));
        stackedWidget_luna2->setAcceptDrops(false);
        stackedWidget_luna2->setFrameShape(QFrame::NoFrame);
        stackedWidget_luna2->setFrameShadow(QFrame::Plain);
        page_0 = new QWidget();
        page_0->setObjectName(QStringLiteral("page_0"));
        layoutWidget2 = new QWidget(page_0);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 10, 481, 121));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(layoutWidget2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        LoadConfig_Btn = new QPushButton(groupBox_4);
        LoadConfig_Btn->setObjectName(QStringLiteral("LoadConfig_Btn"));
        LoadConfig_Btn->setGeometry(QRect(190, 40, 75, 23));
        configure_Btn = new QPushButton(groupBox_4);
        configure_Btn->setObjectName(QStringLiteral("configure_Btn"));
        configure_Btn->setGeometry(QRect(190, 10, 75, 23));
        ResetModule_Btn = new QPushButton(groupBox_4);
        ResetModule_Btn->setObjectName(QStringLiteral("ResetModule_Btn"));
        ResetModule_Btn->setGeometry(QRect(190, 70, 75, 23));
        splitter_5 = new QSplitter(groupBox_4);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setEnabled(true);
        splitter_5->setGeometry(QRect(10, 10, 171, 87));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter_5->sizePolicy().hasHeightForWidth());
        splitter_5->setSizePolicy(sizePolicy1);
        splitter_5->setFrameShape(QFrame::NoFrame);
        splitter_5->setFrameShadow(QFrame::Plain);
        splitter_5->setOrientation(Qt::Horizontal);
        splitter_5->setOpaqueResize(false);
        splitter_4 = new QSplitter(splitter_5);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        label_RFFrequency_2 = new QLabel(splitter_4);
        label_RFFrequency_2->setObjectName(QStringLiteral("label_RFFrequency_2"));
        label_RFFrequency_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter_4->addWidget(label_RFFrequency_2);
        label_2 = new QLabel(splitter_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter_4->addWidget(label_2);
        label = new QLabel(splitter_4);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter_4->addWidget(label);
        label_8 = new QLabel(splitter_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter_4->addWidget(label_8);
        splitter_5->addWidget(splitter_4);
        splitter_2 = new QSplitter(splitter_5);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        sizePolicy1.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy1);
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setOpaqueResize(false);
        comboBox_RFFrequency = new QComboBox(splitter_2);
        comboBox_RFFrequency->addItem(QString());
        comboBox_RFFrequency->addItem(QString());
        comboBox_RFFrequency->addItem(QString());
        comboBox_RFFrequency->addItem(QString());
        comboBox_RFFrequency->addItem(QString());
        comboBox_RFFrequency->addItem(QString());
        comboBox_RFFrequency->addItem(QString());
        comboBox_RFFrequency->setObjectName(QStringLiteral("comboBox_RFFrequency"));
        sizePolicy1.setHeightForWidth(comboBox_RFFrequency->sizePolicy().hasHeightForWidth());
        comboBox_RFFrequency->setSizePolicy(sizePolicy1);
        comboBox_RFFrequency->setMaximumSize(QSize(150, 18));
        comboBox_RFFrequency->setLayoutDirection(Qt::LeftToRight);
        splitter_2->addWidget(comboBox_RFFrequency);
        comboBox_TXO = new QComboBox(splitter_2);
        comboBox_TXO->addItem(QString());
        comboBox_TXO->addItem(QString());
        comboBox_TXO->addItem(QString());
        comboBox_TXO->addItem(QString());
        comboBox_TXO->addItem(QString());
        comboBox_TXO->setObjectName(QStringLiteral("comboBox_TXO"));
        sizePolicy1.setHeightForWidth(comboBox_TXO->sizePolicy().hasHeightForWidth());
        comboBox_TXO->setSizePolicy(sizePolicy1);
        comboBox_TXO->setMaximumSize(QSize(150, 18));
        comboBox_TXO->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboBox_TXO->setMinimumContentsLength(0);
        splitter_2->addWidget(comboBox_TXO);
        comboBox_BW = new QComboBox(splitter_2);
        comboBox_BW->addItem(QString());
        comboBox_BW->addItem(QString());
        comboBox_BW->addItem(QString());
        comboBox_BW->addItem(QString());
        comboBox_BW->setObjectName(QStringLiteral("comboBox_BW"));
        sizePolicy1.setHeightForWidth(comboBox_BW->sizePolicy().hasHeightForWidth());
        comboBox_BW->setSizePolicy(sizePolicy1);
        comboBox_BW->setMaximumSize(QSize(150, 18));
        splitter_2->addWidget(comboBox_BW);
        comboBox_SF = new QComboBox(splitter_2);
        comboBox_SF->addItem(QString());
        comboBox_SF->addItem(QString());
        comboBox_SF->addItem(QString());
        comboBox_SF->addItem(QString());
        comboBox_SF->addItem(QString());
        comboBox_SF->addItem(QString());
        comboBox_SF->addItem(QString());
        comboBox_SF->setObjectName(QStringLiteral("comboBox_SF"));
        sizePolicy1.setHeightForWidth(comboBox_SF->sizePolicy().hasHeightForWidth());
        comboBox_SF->setSizePolicy(sizePolicy1);
        comboBox_SF->setMaximumSize(QSize(150, 18));
        splitter_2->addWidget(comboBox_SF);
        splitter_5->addWidget(splitter_2);

        gridLayout_2->addWidget(groupBox_4, 0, 1, 1, 1);

        groupBox_5 = new QGroupBox(layoutWidget2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy2);
        groupBox_5->setMaximumSize(QSize(200, 16777215));
        splitter_7 = new QSplitter(groupBox_5);
        splitter_7->setObjectName(QStringLiteral("splitter_7"));
        splitter_7->setGeometry(QRect(10, 10, 171, 81));
        sizePolicy1.setHeightForWidth(splitter_7->sizePolicy().hasHeightForWidth());
        splitter_7->setSizePolicy(sizePolicy1);
        splitter_7->setMaximumSize(QSize(16777215, 16777215));
        splitter_7->setOrientation(Qt::Horizontal);
        splitter_6 = new QSplitter(splitter_7);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setOrientation(Qt::Vertical);
        label_RFFrequency_3 = new QLabel(splitter_6);
        label_RFFrequency_3->setObjectName(QStringLiteral("label_RFFrequency_3"));
        label_RFFrequency_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter_6->addWidget(label_RFFrequency_3);
        label_4 = new QLabel(splitter_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter_6->addWidget(label_4);
        label_5 = new QLabel(splitter_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter_6->addWidget(label_5);
        label_7 = new QLabel(splitter_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter_6->addWidget(label_7);
        splitter_7->addWidget(splitter_6);
        splitter = new QSplitter(splitter_7);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        lineEdit_RFFrequency = new QLineEdit(splitter);
        lineEdit_RFFrequency->setObjectName(QStringLiteral("lineEdit_RFFrequency"));
        lineEdit_RFFrequency->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_RFFrequency->sizePolicy().hasHeightForWidth());
        lineEdit_RFFrequency->setSizePolicy(sizePolicy3);
        lineEdit_RFFrequency->setMaximumSize(QSize(100, 16777215));
        lineEdit_RFFrequency->setStyleSheet(QStringLiteral("background-color: rgb(236, 236, 236);"));
        lineEdit_RFFrequency->setReadOnly(true);
        splitter->addWidget(lineEdit_RFFrequency);
        lineEdit_TXO = new QLineEdit(splitter);
        lineEdit_TXO->setObjectName(QStringLiteral("lineEdit_TXO"));
        lineEdit_TXO->setEnabled(true);
        sizePolicy3.setHeightForWidth(lineEdit_TXO->sizePolicy().hasHeightForWidth());
        lineEdit_TXO->setSizePolicy(sizePolicy3);
        lineEdit_TXO->setMaximumSize(QSize(100, 16777215));
        lineEdit_TXO->setStyleSheet(QStringLiteral("background-color: rgb(236, 236, 236);"));
        lineEdit_TXO->setReadOnly(true);
        splitter->addWidget(lineEdit_TXO);
        lineEdit_BW = new QLineEdit(splitter);
        lineEdit_BW->setObjectName(QStringLiteral("lineEdit_BW"));
        lineEdit_BW->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit_BW->sizePolicy().hasHeightForWidth());
        lineEdit_BW->setSizePolicy(sizePolicy1);
        lineEdit_BW->setMaximumSize(QSize(30, 16777215));
        lineEdit_BW->setStyleSheet(QStringLiteral("background-color: rgb(236, 236, 236);"));
        lineEdit_BW->setReadOnly(true);
        splitter->addWidget(lineEdit_BW);
        lineEdit_SF = new QLineEdit(splitter);
        lineEdit_SF->setObjectName(QStringLiteral("lineEdit_SF"));
        lineEdit_SF->setMaximumSize(QSize(30, 16777215));
        lineEdit_SF->setStyleSheet(QStringLiteral("background-color: rgb(236, 236, 236);"));
        splitter->addWidget(lineEdit_SF);
        splitter_7->addWidget(splitter);
        SaveConfig_Btn = new QPushButton(groupBox_5);
        SaveConfig_Btn->setObjectName(QStringLiteral("SaveConfig_Btn"));
        SaveConfig_Btn->setGeometry(QRect(120, 90, 71, 21));

        gridLayout_2->addWidget(groupBox_5, 0, 0, 1, 1);

        stackedWidget_luna2->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        layoutWidget3 = new QWidget(page_1);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(160, 20, 296, 53));
        gridLayout_6 = new QGridLayout(layoutWidget3);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_12->setFont(font);

        horizontalLayout_5->addWidget(label_12);

        lineEdit_luna2_udid = new QLineEdit(layoutWidget3);
        lineEdit_luna2_udid->setObjectName(QStringLiteral("lineEdit_luna2_udid"));
        lineEdit_luna2_udid->setEnabled(false);
        lineEdit_luna2_udid->setAutoFillBackground(false);
        lineEdit_luna2_udid->setStyleSheet(QStringLiteral(""));
        lineEdit_luna2_udid->setFrame(true);

        horizontalLayout_5->addWidget(lineEdit_luna2_udid);

        udid_Btn = new QPushButton(layoutWidget3);
        udid_Btn->setObjectName(QStringLiteral("udid_Btn"));
        udid_Btn->setEnabled(false);

        horizontalLayout_5->addWidget(udid_Btn);


        gridLayout_6->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));

        gridLayout_6->addLayout(formLayout, 1, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(50, 16777215));
        label_10->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        textEdit_luna2_group = new QTextEdit(layoutWidget3);
        textEdit_luna2_group->setObjectName(QStringLiteral("textEdit_luna2_group"));
        textEdit_luna2_group->setEnabled(false);
        textEdit_luna2_group->setMaximumSize(QSize(40, 20));
        textEdit_luna2_group->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_luna2_group->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, textEdit_luna2_group);


        gridLayout_6->addLayout(formLayout_2, 0, 0, 1, 1);

        layoutWidget4 = new QWidget(page_1);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 10, 189, 131));
        verticalLayout_6 = new QVBoxLayout(layoutWidget4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        radioButton_luna2_PASS = new QRadioButton(layoutWidget4);
        radioButton_luna2_PASS->setObjectName(QStringLiteral("radioButton_luna2_PASS"));
        radioButton_luna2_PASS->setChecked(true);

        verticalLayout_6->addWidget(radioButton_luna2_PASS);

        radioButton_luna2_UDID = new QRadioButton(layoutWidget4);
        radioButton_luna2_UDID->setObjectName(QStringLiteral("radioButton_luna2_UDID"));

        verticalLayout_6->addWidget(radioButton_luna2_UDID);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        radioButton_luna2_MS = new QRadioButton(layoutWidget4);
        radioButton_luna2_MS->setObjectName(QStringLiteral("radioButton_luna2_MS"));

        verticalLayout_3->addWidget(radioButton_luna2_MS);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        checkBox_luna2_master = new QCheckBox(layoutWidget4);
        checkBox_luna2_master->setObjectName(QStringLiteral("checkBox_luna2_master"));
        checkBox_luna2_master->setEnabled(false);

        horizontalLayout_2->addWidget(checkBox_luna2_master);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        checkBox_luna2_slave = new QCheckBox(layoutWidget4);
        checkBox_luna2_slave->setObjectName(QStringLiteral("checkBox_luna2_slave"));
        checkBox_luna2_slave->setEnabled(false);
        checkBox_luna2_slave->setMaximumSize(QSize(45, 16777215));
        checkBox_luna2_slave->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(checkBox_luna2_slave);

        spinBox_luna2Group = new QSpinBox(layoutWidget4);
        spinBox_luna2Group->setObjectName(QStringLiteral("spinBox_luna2Group"));
        spinBox_luna2Group->setMinimum(0);

        horizontalLayout_3->addWidget(spinBox_luna2Group);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        defineMS_Btn = new QPushButton(layoutWidget4);
        defineMS_Btn->setObjectName(QStringLiteral("defineMS_Btn"));
        defineMS_Btn->setEnabled(false);
        defineMS_Btn->setCheckable(true);

        horizontalLayout_4->addWidget(defineMS_Btn);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_3);

        stackedWidget_luna2->addWidget(page_1);
        layoutWidget5 = new QWidget(groupBox_3);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(460, 10, 56, 16));
        gridLayout_5 = new QGridLayout(layoutWidget5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        nextPage_Btn = new QPushButton(layoutWidget5);
        nextPage_Btn->setObjectName(QStringLiteral("nextPage_Btn"));
        nextPage_Btn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-style:none;\n"
"border:1px solid #B2B6B9;\n"
"color:#000000;\n"
"color:#000000;\n"
"padding:1px;\n"
"min-height:5px;\n"
"border-radius:2px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #E1E4E6,stop:1 #CCD3D9);\n"
"}\n"
"\n"
"QPushButton:hover:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F3F4,stop:1 #E7E9EB);\n"
"}\n"
"\n"
"QPushButton:pressed:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #E1E4E6,stop:1 #CCD3D9);\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral("right.ico"), QSize(), QIcon::Normal, QIcon::Off);
        nextPage_Btn->setIcon(icon);

        gridLayout_5->addWidget(nextPage_Btn, 0, 1, 1, 1);

        previousPage_Btn = new QPushButton(layoutWidget5);
        previousPage_Btn->setObjectName(QStringLiteral("previousPage_Btn"));
        previousPage_Btn->setLayoutDirection(Qt::RightToLeft);
        previousPage_Btn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-style:none;\n"
"border:1px solid #B2B6B9;\n"
"color:#000000;\n"
"color:#000000;\n"
"padding:1px;\n"
"min-height:5px;\n"
"border-radius:2px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #E1E4E6,stop:1 #CCD3D9);\n"
"}\n"
"\n"
"QPushButton:hover:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #F2F3F4,stop:1 #E7E9EB);\n"
"}\n"
"\n"
"QPushButton:pressed:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #E1E4E6,stop:1 #CCD3D9);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/left.ico"), QSize(), QIcon::Normal, QIcon::Off);
        previousPage_Btn->setIcon(icon1);

        gridLayout_5->addWidget(previousPage_Btn, 0, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 0, 21, 16));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral("Refresh.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(20, 20));
        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        layoutWidget7 = new QWidget(centralWidget);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_5 = new QVBoxLayout(layoutWidget7);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        layoutWidget8 = new QWidget(centralWidget);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(0, 0, 2, 2));
        gridLayout_4 = new QGridLayout(layoutWidget8);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 240, 291, 21));
        lineEdit->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 255, 0);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 545, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuBaudRate = new QMenu(menuBar);
        menuBaudRate->setObjectName(QStringLiteral("menuBaudRate"));
        menuBaudRate->setContextMenuPolicy(Qt::DefaultContextMenu);
        menuBaudRate->setTearOffEnabled(false);
        menuBaudRate->setSeparatorsCollapsible(true);
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuBaudRate->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionSave_log);
        menuBaudRate->addAction(action1200);
        menuBaudRate->addAction(action2400);
        menuBaudRate->addAction(action4800);
        menuBaudRate->addAction(action9600);
        menuBaudRate->addAction(action19200);
        menuBaudRate->addAction(action38400);
        menuBaudRate->addAction(action57600);
        menuBaudRate->addAction(action115200);
        menuBaudRate->addSeparator();
        menuBaudRate->addAction(actionSaveBaudRate);

        retranslateUi(MainWindow);

        openPort_Btn->setDefault(true);
        baud_CB->setCurrentIndex(3);
        stackedWidget_luna2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SerialPort", nullptr));
        actionSave_log->setText(QApplication::translate("MainWindow", "Save log", nullptr));
        action2400->setText(QApplication::translate("MainWindow", "2400", nullptr));
        action4800->setText(QApplication::translate("MainWindow", "4800", nullptr));
        action9600->setText(QApplication::translate("MainWindow", "9600", nullptr));
        action14400->setText(QApplication::translate("MainWindow", "14400", nullptr));
        action19200->setText(QApplication::translate("MainWindow", "19200", nullptr));
        action38400->setText(QApplication::translate("MainWindow", "38400", nullptr));
        action57600->setText(QApplication::translate("MainWindow", "57600", nullptr));
        action115200->setText(QApplication::translate("MainWindow", "115200", nullptr));
        actionSaveBaudRate->setText(QApplication::translate("MainWindow", "SaveBaudRate", nullptr));
        action1200->setText(QApplication::translate("MainWindow", "1200", nullptr));
        SerialPort->setTitle(QApplication::translate("MainWindow", "SerialPort", nullptr));
        parity_CB->setItemText(0, QApplication::translate("MainWindow", "None", nullptr));
        parity_CB->setItemText(1, QApplication::translate("MainWindow", "Even", nullptr));
        parity_CB->setItemText(2, QApplication::translate("MainWindow", "Odd", nullptr));
        parity_CB->setItemText(3, QApplication::translate("MainWindow", "Space", nullptr));
        parity_CB->setItemText(4, QApplication::translate("MainWindow", "Mark", nullptr));

        openPort_Btn->setText(QApplication::translate("MainWindow", "Open Port", nullptr));
        baud_CB->setItemText(0, QApplication::translate("MainWindow", "1200", nullptr));
        baud_CB->setItemText(1, QApplication::translate("MainWindow", "2400", nullptr));
        baud_CB->setItemText(2, QApplication::translate("MainWindow", "4800", nullptr));
        baud_CB->setItemText(3, QApplication::translate("MainWindow", "9600", nullptr));
        baud_CB->setItemText(4, QApplication::translate("MainWindow", "19200", nullptr));
        baud_CB->setItemText(5, QApplication::translate("MainWindow", "38400", nullptr));
        baud_CB->setItemText(6, QApplication::translate("MainWindow", "57600", nullptr));
        baud_CB->setItemText(7, QApplication::translate("MainWindow", "115200", nullptr));

        databit_CB->setItemText(0, QApplication::translate("MainWindow", "Data8", nullptr));
        databit_CB->setItemText(1, QApplication::translate("MainWindow", "Data7", nullptr));
        databit_CB->setItemText(2, QApplication::translate("MainWindow", "Data6", nullptr));
        databit_CB->setItemText(3, QApplication::translate("MainWindow", "Data5", nullptr));

        label_parity->setText(QApplication::translate("MainWindow", "Parity:", nullptr));
        stopbit_CB->setItemText(0, QApplication::translate("MainWindow", "1\344\275\215", nullptr));
        stopbit_CB->setItemText(1, QApplication::translate("MainWindow", "1.5\344\275\215", nullptr));
        stopbit_CB->setItemText(2, QApplication::translate("MainWindow", "2\344\275\215", nullptr));

        label_stopbit->setText(QApplication::translate("MainWindow", "Stop Bits:", nullptr));
        label_databit->setText(QApplication::translate("MainWindow", "Data Bits:", nullptr));
        label_com->setText(QApplication::translate("MainWindow", "Port:", nullptr));
        label_baund->setText(QApplication::translate("MainWindow", "Baud:", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Format", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "ACSII", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "HEX", nullptr));
        SendData_Btn->setText(QApplication::translate("MainWindow", "Send", nullptr));
        groupBox->setTitle(QString());
        label_Version->setText(QString());
        label_RFFrequency->setText(QString());
        label_3->setText(QString());
        label_TXO->setText(QString());
        label_6->setText(QString());
        moduleInfo_label->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Luna2 Configure", nullptr));
        groupBox_4->setTitle(QString());
        LoadConfig_Btn->setText(QApplication::translate("MainWindow", "Load config", nullptr));
        configure_Btn->setText(QApplication::translate("MainWindow", "configure", nullptr));
        ResetModule_Btn->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        label_RFFrequency_2->setText(QApplication::translate("MainWindow", "RF_Frequency:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TXO:", nullptr));
        label->setText(QApplication::translate("MainWindow", "BW:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "SF:", nullptr));
        comboBox_RFFrequency->setItemText(0, QString());
        comboBox_RFFrequency->setItemText(1, QApplication::translate("MainWindow", "473000000", nullptr));
        comboBox_RFFrequency->setItemText(2, QApplication::translate("MainWindow", "475000000", nullptr));
        comboBox_RFFrequency->setItemText(3, QApplication::translate("MainWindow", "477000000", nullptr));
        comboBox_RFFrequency->setItemText(4, QApplication::translate("MainWindow", "920000000", nullptr));
        comboBox_RFFrequency->setItemText(5, QApplication::translate("MainWindow", "923000000", nullptr));
        comboBox_RFFrequency->setItemText(6, QApplication::translate("MainWindow", "925000000", nullptr));

        comboBox_TXO->setItemText(0, QString());
        comboBox_TXO->setItemText(1, QApplication::translate("MainWindow", "14", nullptr));
        comboBox_TXO->setItemText(2, QApplication::translate("MainWindow", "15", nullptr));
        comboBox_TXO->setItemText(3, QApplication::translate("MainWindow", "17", nullptr));
        comboBox_TXO->setItemText(4, QApplication::translate("MainWindow", "18", nullptr));

        comboBox_BW->setItemText(0, QString());
        comboBox_BW->setItemText(1, QApplication::translate("MainWindow", "0", nullptr));
        comboBox_BW->setItemText(2, QApplication::translate("MainWindow", "1", nullptr));
        comboBox_BW->setItemText(3, QApplication::translate("MainWindow", "2", nullptr));

        comboBox_SF->setItemText(0, QString());
        comboBox_SF->setItemText(1, QApplication::translate("MainWindow", "7", nullptr));
        comboBox_SF->setItemText(2, QApplication::translate("MainWindow", "8", nullptr));
        comboBox_SF->setItemText(3, QApplication::translate("MainWindow", "9", nullptr));
        comboBox_SF->setItemText(4, QApplication::translate("MainWindow", "10", nullptr));
        comboBox_SF->setItemText(5, QApplication::translate("MainWindow", "11", nullptr));
        comboBox_SF->setItemText(6, QApplication::translate("MainWindow", "12", nullptr));

        groupBox_5->setTitle(QString());
        label_RFFrequency_3->setText(QApplication::translate("MainWindow", "RF_Frequency:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "TXO:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "BW:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "SF:", nullptr));
        SaveConfig_Btn->setText(QApplication::translate("MainWindow", "Save config", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "UDID:", nullptr));
        udid_Btn->setText(QApplication::translate("MainWindow", "\347\242\272\345\256\232", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Group:", nullptr));
        radioButton_luna2_PASS->setText(QApplication::translate("MainWindow", "\351\200\217\346\230\216\345\202\263\350\274\270", nullptr));
        radioButton_luna2_UDID->setText(QApplication::translate("MainWindow", "\345\256\232\345\235\200\345\202\263\350\274\270", nullptr));
        radioButton_luna2_MS->setText(QApplication::translate("MainWindow", "Master/Slave\345\202\263\350\274\270", nullptr));
        checkBox_luna2_master->setText(QApplication::translate("MainWindow", "Master", nullptr));
        checkBox_luna2_slave->setText(QApplication::translate("MainWindow", "Slave", nullptr));
        defineMS_Btn->setText(QApplication::translate("MainWindow", "lock", nullptr));
        nextPage_Btn->setText(QString());
        previousPage_Btn->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        pushButton->setAccessibleName(QApplication::translate("MainWindow", "Refresh_Btn", nullptr));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuBaudRate->setTitle(QApplication::translate("MainWindow", "BaudRate", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
