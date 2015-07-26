// Builder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <memory>
#include <iostream>

#include "BuilderA.h"
#include "BuilderB.h"
#include "Director.h"

int _tmain(int argc, _TCHAR* argv[])
{
    Director foreman(std::make_shared<BuilderA>());
    auto product = foreman.GetProduct();
	return 0;
}

