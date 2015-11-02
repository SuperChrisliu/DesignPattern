#ifndef SINGLETON_H
#define SINGLETON_H

#include <QScopedPointer>
#include <QMutex>
#include <QtGlobal>

template<typename T>
class Singleton
{
public:
    static T &getInstance();
private:
    Singleton();
    ~Singleton();
    Q_DISABLE_COPY(Singleton)
    static QMutex _mutex;
    static QScopedPointer<T> _instance;
};

    ////////////////////////////////////////////////////////////////
    ///                                                           //
    ///              Singleton Implementation                     //
    ///                                                           //
    ////////////////////////////////////////////////////////////////

template<typename T> QMutex Singleton<T>::_mutex;
template<typename T> QScopedPointer<T> Singleton<T>::_instance;

template<typename T>
T &Singleton<T>::getInstance()
{
    if(_instance.isNull())
    {
        _mutex.lock();
        if(_instance.isNull())
        {
            _instance.reset(new T());
        }
        _mutex.unlock();
    }
    return *_instance.data();
}

////////////////////////////////////////////////////////////////
///                                                           //
///              Singleton Macro                              //
///                                                           //
////////////////////////////////////////////////////////////////

#define SINGLETON(Class)                        \
private:                                        \
    Class();                                    \
    ~Class();                                   \
    Class(const Class &other);                  \
    Class &operator=(const Class &other);       \
    friend class Singleton<Class>;              \
    friend struct QScopedPointerDeleter<Class>;

#endif // SINGLETON_H
