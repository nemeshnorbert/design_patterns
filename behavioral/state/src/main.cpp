#include <cstddef>
#include "context.h"


int main(int argc, char** argv)
{
    auto context = Context{};
    for (size_t iteration = 0; iteration < 10; ++iteration)
    {
        context.Request();
    }

    return 0;
}

