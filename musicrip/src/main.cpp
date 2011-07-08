#include <QtGui/QApplication>
#include "mainwindow.h"

#include "getcddatacdinfo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    GetCdDataCdInfo i ;

    i.readData() ;

    return a.exec();
}
