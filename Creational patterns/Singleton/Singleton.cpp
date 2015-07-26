#include "stdafx.h"

#include <iostream>

#include "Singleton.h"

void Singleton::Action()
{
    std::cout << "Singleton::Action()\n";
}

Singleton& Singleton::Instance()
{
    static Singleton instance;
    return instance;
}

Singleton::Singleton()
{

}
