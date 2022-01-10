#include <memory>
#include "pluggable_adapter.h"

int main()
{
    auto adapter = PluggableAdapter{std::make_shared<AdapteeB>()};
    adapter.Action(1);
    return 0;
}

