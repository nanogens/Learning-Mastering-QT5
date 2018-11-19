#include <QCoreApplication>
#include <QCommandLineOption>
#include <QCommandLineParser>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    a.setApplicationName("Hello World");
    a.setApplicationVersion("0.1");

    int num = -1; // not really needed

    QCommandLineParser parser;
    parser.addHelpOption();
    parser.addVersionOption();

    QCommandLineOption numOption("n", "The number argument", "number");

    parser.addOption(numOption);
    parser.process(a);

    if (parser.isSet(numOption))
    {
        num = parser.value(numOption).toInt();
    }

    qDebug("Hello Qt World: This is number %d.", num);

    return 0;
}
