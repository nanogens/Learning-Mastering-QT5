#include <QCoreApplication>
#include <QtDebug>
#include <QSysInfo>

void printHello()
{
#ifdef Q_OS_WIN
    qDebug() << "Hello Qt World on Windows!";

    if (QSysInfo::windowsVersion() == QSysInfo::WV_XP) {
        qDebug() << "We're deprecating Windows XP support!";
    } else if (QSysInfo::windowsVersion() == QSysInfo::WV_10_0) {
        qDebug() << "Welcome to Windows 10!";
    }
#elif defined(Q_OS_UNIX)
    qDebug() << "Hello Qt World on UNIX!";
#else
    qDebug() << "We don't support this platform yet!";
#endif
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    printHello();
    return 0;
}
