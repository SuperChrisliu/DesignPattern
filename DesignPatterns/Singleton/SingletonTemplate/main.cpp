#include <QCoreApplication>
#include "singletontest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Singleton<SingletonTest>::getInstance().test();
    Singleton<SingletonTest>::getInstance().test();
    Singleton<SingletonTest>::getInstance().test();

    return a.exec();
}
