#include "stdafx.h"

#include <iostream>

#include "AdapteeB.h"

void AdapteeB::Operation(int param1, char param2)
{
    std::cout << "AdapteeB::Operation(" << param1 << ", " << param2 << ")\n";
}
