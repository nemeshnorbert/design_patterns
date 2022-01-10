#ifndef SINGLETON_SINGLETON_H_
#define SINGLETON_SINGLETON_H_

class Singleton
{
private:
    Singleton();

    Singleton(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator = (const Singleton&) = delete;
    Singleton& operator = (Singleton&&) = delete;

public:
    static Singleton& Instance();

    void Action();
};


#endif
