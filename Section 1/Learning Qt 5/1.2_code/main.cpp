#include <QCoreApplication>
#include "myparentclass.h"
#include "mychild.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyParentClass *parent = new MyParentClass();
    MyChild *child = new MyChild(parent);

    parent->deleteLater();
    child->deleteLater();
    child->deleteLater();

    return a.exec();
}
