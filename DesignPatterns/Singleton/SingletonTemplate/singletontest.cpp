#include "singletontest.h"
#include <QDebug>


SingletonTest::SingletonTest()
{
    qDebug()<<"This is class SingletonTest construct function in SingletonTemplate project, "
              "and should only display one time.";
}

SingletonTest::~SingletonTest()
{
}

void SingletonTest::test()
{
    qDebug()<<"Singleton test";
}
