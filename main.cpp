#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    a.setWindowIcon(QIcon(QDir::currentPath()+"\\images.jpg"));
    MainWindow w;
    w.setWindowTitle("SerialPort 2.0.2");
    w.show();
    QFile styleFile(QDir::currentPath()+"\\gray.qss");
    styleFile.open(QIODevice::ReadOnly);
    QString setStyleSheet(styleFile.readAll());;
    a.setStyleSheet(setStyleSheet);

    return a.exec();
}
