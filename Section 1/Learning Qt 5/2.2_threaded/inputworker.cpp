#include "inputworker.h"
#include <QThread>
#include <QtDebug>
#include <iostream>

InputWorker::InputWorker(QObject *parent) : QObject(parent),
    is(stdin)
{
}

void InputWorker::startWork()
{
    std::cout << "Input worker thread:" << QThread::currentThreadId() << std::endl;

    do {
        std::cout << "Input the size of vector" << std::endl;
        QString input = is.readLine();
        emit inputAvailable(input);
    } while (true);
}
