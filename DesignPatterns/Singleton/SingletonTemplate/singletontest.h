#ifndef SINGLETONTEST_H
#define SINGLETONTEST_H

#include "singleton.h"

class SingletonTest
{
public:
    void test();

    SINGLETON(SingletonTest) \
};

#endif // SINGLETONTEST_H
