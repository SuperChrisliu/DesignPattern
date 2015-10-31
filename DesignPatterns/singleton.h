#ifndef SINGLETON_H
#define SINGLETON_H
#include <QObject>


class Singleton : public QObject
{
public:
    static Singleton &getInstance();
    ~Singleton();
    Q_DISABLE_COPY(Singleton);
private:
    Singleton(QObject *parent = 0);
};

#endif // SINGLETON_H
