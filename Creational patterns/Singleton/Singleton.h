#ifndef SINGLETON_SINGLETON_H_
#define SINGLETON_SINGLETON_H_

class Singleton
{
private:
    Singleton();

    Singleton(const Singleton&);
    Singleton& operator = (const Singleton&);

public:
    static Singleton& Instance();

    void Action();
};


#endif