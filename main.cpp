#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // This is me adding some simple comments
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
