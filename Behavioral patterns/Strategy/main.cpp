// Strategy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "StrategyA.h"
#include "StrategyB.h"
#include "Context.h"

int _tmain(int argc, _TCHAR* argv[])
{
    auto context = std::make_shared<Context>(std::make_shared<StrategyA>());

    context->ContextInterface();

	return 0;
}

