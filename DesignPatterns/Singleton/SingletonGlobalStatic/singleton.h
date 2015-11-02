#ifndef SINGLETON_H
#define SINGLETON_H

#include <QtGlobal>

class Singleton
{
public:
    static Singleton &getInstance();
private:
    Singleton();
    ~Singleton();
    Q_DISABLE_COPY(Singleton)
};

#endif // SINGLETON_H
