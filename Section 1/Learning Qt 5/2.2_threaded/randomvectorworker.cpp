#include "randomvectorworker.h"
#include <QVector>
#include <QDateTime>
#include <QThread>
#include <iostream>

RandomVectorWorker::RandomVectorWorker(QObject *parent) :
    QObject(parent)
{
}

void RandomVectorWorker::inputHandler(const QString &in)
{
    std::cout << "RandomVectorWorkers thread:" << QThread::currentThreadId() << std::endl;
    int size = in.toInt();
    QVector<int> vec;
    vec.resize(size);
    qsrand(QDateTime::currentMSecsSinceEpoch());
    for (int& num : vec) {
        num = qrand();
    }
    std::cout << "Randomized" << std::endl;
}
