#ifndef SINGLETONTEST_H
#define SINGLETONTEST_H

#include <QDebug>
#include "singleton.h"

class SingletonTest
{
public:
    void test()
    {
        qDebug()<<"Singleton Test";
    }

private:
    /////////////////////// The following code just for test, and use macro SINGLETON replace it.
    SingletonTest()
    {
        qDebug()<<"This is class SingletonTest construct function in SingletonTemplate project, "
                  "and should only display one time.";
    }
    ~SingletonTest()
    {

    }
    SingletonTest(const SingletonTest &other);
    SingletonTest &operator=(const SingletonTest &other);
    friend class Singleton<SingletonTest>;
    friend struct QScopedPointerDeleter<SingletonTest>;

    //SINGLETON(SingletonTest)
};

#endif // SINGLETONTEST_H
