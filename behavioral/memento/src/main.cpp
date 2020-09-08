#include "originator.h"
#include "caretaker.h"

int main(int argc, char** argv)
{
    Originator originator(3);
    Caretaker caretaker;
    caretaker.SetMemento(originator.CreateMemento());

    originator.AcquireMemento(caretaker.GetMemento());

	return 0;
}

