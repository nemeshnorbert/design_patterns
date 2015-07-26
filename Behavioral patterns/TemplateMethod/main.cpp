// TemplateMethod.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <memory>

#include "ConcreteClassA.h"
#include "ConcreteClassB.h"

int _tmain(int argc, _TCHAR* argv[])
{
    auto object = std::make_shared<ConcreteClassB>();

    object->TemplateMethod();

	return 0;
}

