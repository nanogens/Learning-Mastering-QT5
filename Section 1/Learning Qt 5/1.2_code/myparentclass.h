#ifndef MYPARENTCLASS_H
#define MYPARENTCLASS_H

#include <QObject>

class MyParentClass : public QObject
{
    Q_OBJECT
public:
    explicit MyParentClass(QObject *parent = 0);
    ~MyParentClass();

signals:

public slots:
};

#endif // MYPARENTCLASS_H
