// Prototype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "PrototypeX1.h"
#include "PrototypeX2.h"
#include "PrototypeY1.h"
#include "PrototypeY2.h"
#include "PrototypeFactory.h"
#include "Component.h"

int _tmain(int argc, _TCHAR* argv[])
{
    auto customFactory = std::make_shared<PrototypeFactory>(
        std::make_shared<PrototypeX1>(), std::make_shared<PrototypeY2>());

    Component component(customFactory);
    component.ProcessPrototypes(1, 2, 3);

	return 0;
}

