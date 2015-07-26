#include "stdafx.h"

#include <iostream>

#include "StrategyA.h"

StrategyA::~StrategyA()
{

}

void StrategyA::PerformAlgorithm()
{
    std::cout << "StrategyA::PerformAlgorithm()\n";
}
