#include "mainwindow.h"
#include <QApplication>
#define Version_str            "2.1.1"
#define VersionDate_str       "2019.5.23"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    a.setWindowIcon(QIcon(QDir::currentPath()+"\\images.jpg"));
    MainWindow w;
    w.setWindowTitle("SerialPort " Version_str);
    w.show();
    QFile styleFile(QDir::currentPath()+"\\gray.qss");
    styleFile.open(QIODevice::ReadOnly);
    QString setStyleSheet(styleFile.readAll());;
    a.setStyleSheet(setStyleSheet);

    return a.exec();
}
