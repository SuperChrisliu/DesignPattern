#include <QCoreApplication>
#include "singletontest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SingletonTest::getInstance().test();
    SingletonTest::getInstance().test();
    SingletonTest::getInstance().test();

    return a.exec();
}
