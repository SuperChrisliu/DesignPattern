#include "singletontest.h"
#include <QDebug>

SINGLETON_STATIC_INITIALIZE(SingletonTest) \

SingletonTest::SingletonTest()
{
    qDebug()<<"This is class SingletonTest construct function in SingletonMacro project, "
              "and should only display one time.";
}

SingletonTest::~SingletonTest()
{

}

void SingletonTest::test()
{
    {
        qDebug()<<"Singleton test";
    }
}
