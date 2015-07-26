// Iterator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "ArrayContainer.h"

int _tmain(int argc, _TCHAR* argv[])
{
    auto collection = std::make_shared<ArrayContainer<int>>(10, 5);
    auto iterator = collection->CreateIterator();

    std::cout << "Array contents:\n";

    for (iterator->First(); !iterator->IsDone(); iterator->Next())
    {
        std::cout << iterator->GetItem() << '\n';
    }
	return 0;
}

