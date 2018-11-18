#include <QCoreApplication>
#include <QtDebug>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug("Hello Qt World! My %d application.", 1);

    // with #include <QtDebug>
    qDebug() << "Hello Qt World!" << "My" << 2 << "application.";
    int num = 2;
    std::cout << "Hello Qt World" << num << std::endl;
    return a.exec();
}
