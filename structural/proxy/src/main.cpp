#include "proxy.h"

int main(int argc, char** argv)
{
    auto actor = std::make_shared<Proxy>();

    actor->Operation();

    return 0;
}

