#include <QCoreApplication>
#include <QProcess>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Main process ID: " << a.applicationPid() << "\n";

    QStringList args; //QList<QString>
    args << "-c";
    QProcess process;
    process.setProgram("D:\\gzip\\bin\\gzip.exe");
    process.setArguments(args);
    process.start();
    process.waitForStarted();
    process.write("Hello World");
    process.waitForBytesWritten();
    process.closeWriteChannel();
    std::cout << "Process started: " << process.processId() << std::endl;
    process.waitForReadyRead();
    std::cout << process.readAll().toBase64().toStdString() << std::endl;
    process.close();

    return 0;
}
