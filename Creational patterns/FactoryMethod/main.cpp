// FactoryMethod.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "CreatorA.h"
#include "CreatorB.h"

int _tmain(int argc, _TCHAR* argv[])
{
    auto creator = std::make_shared<CreatorB>();
    creator->Action();
	return 0;
}

