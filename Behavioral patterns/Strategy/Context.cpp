#include "stdafx.h"
#include "Context.h"

void Context::ContextInterface()
{
    strategy_->PerformAlgorithm();
}

Context::Context(std::shared_ptr<Strategy> strategy) : strategy_(strategy)
{

}
