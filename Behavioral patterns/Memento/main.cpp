// Memento.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Originator.h"
#include "Caretaker.h"

int _tmain(int argc, _TCHAR* argv[])
{
    Originator originator(3);
    Caretaker caretaker;
    caretaker.SetMemento(originator.CreateMemento());

    originator.AcquireMemento(caretaker.GetMemento());

	return 0;
}

