#include "originator.h"
#include "caretaker.h"

int main(int argc, char** argv)
{
    auto originator = Originator{3};
    auto caretaker = Caretaker{};
    caretaker.SetMemento(originator.CreateMemento());

    originator.AcquireMemento(caretaker.GetMemento());

    return 0;
}

