#ifndef SINGLETON_H
#define SINGLETON_H



#include <QScopedPointer>
#include <QMutex>

#define SINGLETON(Class) \
private:\
    Class();\
    ~Class();\
    Class &operator=(const Class &);\
    Class(const Class &);\
    static QMutex _mutex;\
    static QScopedPointer<Class> _instance;\
    friend struct QScopedPointerDeleter<Class>; \
    friend class QScopedPointer<Class>; \
public:\
    static Class &getInstance()\
    {\
        if(_instance.isNull())\
        {\
            _mutex.lock();\
            if(_instance.isNull())\
            {\
                _instance.reset(new Class());\
            }\
            _mutex.unlock();\
        }\
        return *_instance.data();\
     }

#define SINGLETON_STATIC_INITIALIZE(Class)\
    QMutex Class::_mutex;\
    QScopedPointer<Class> Class::_instance;

#endif // SINGLETON_H
