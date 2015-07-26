// Bridge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "RefinedAbstractionA.h"
#include "RefinedAbstractionB.h"


int _tmain(int argc, _TCHAR* argv[])
{
    auto implementationA = std::make_shared<ImplementationA>();
    auto implementationB = std::make_shared<ImplementationB>();

    auto abstractionA = std::make_shared<RefinedAbstractionA>(implementationA);
    abstractionA->Operation();

    auto abstractionB = std::make_shared<RefinedAbstractionB>(implementationB);
    abstractionB->Operation();

	return 0;
}

