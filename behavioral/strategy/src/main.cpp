#include "strategy_a.h"
#include "strategy_b.h"
#include "context.h"

int main(int argc, char** argv)
{
    auto context = std::make_shared<Context>(std::make_shared<StrategyA>());

    context->ContextInterface();

    return 0;
}
