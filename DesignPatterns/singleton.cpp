#include "singleton.h"

Singleton::Singleton(QObject *parent)
    : QObject(parent)
{

}

Singleton::~Singleton()
{

}

Singleton &Singleton::getInstance()
{
    static Singleton _instance;
    return _instance;
}

