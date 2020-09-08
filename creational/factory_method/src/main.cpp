#include "creator_a.h"
#include "creator_b.h"

int main(int argc, char** argv)
{
    auto creator = std::make_shared<CreatorB>();
    creator->Action();
    return 0;
}

