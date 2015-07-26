#include "stdafx.h"

#include <iostream>

#include "Adaptee.h"

void Adaptee::Operation(int param1, int param2)
{
    std::cout << "Adaptee::Operation(" << param1 << ", " << param2 << ")\n";
}
