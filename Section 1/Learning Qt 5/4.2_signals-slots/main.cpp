#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QObject::connect(&w, &MainWindow::destroyed, []() {
        qDebug("mainwindow destroyed");
    });
    w.show();

    return a.exec();
}
