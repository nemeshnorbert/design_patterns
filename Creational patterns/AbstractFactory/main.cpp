// AbstractFactory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "FactoryA.h"
#include "FactoryB.h"

int _tmain(int argc, _TCHAR* argv[])
{
    auto factory = std::make_shared<FactoryB>();
    auto productX = factory->CreateProductX();
    auto productY = factory->CreateProductY();
    productX->Operation();
    productY->Operation();
	return 0;
}

