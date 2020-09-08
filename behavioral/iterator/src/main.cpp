#include <iostream>

#include "array_container.h"

int main(int argc, char** argv)
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

