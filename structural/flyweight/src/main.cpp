#include "flyweight_factory.h"

int main()
{
    State externalState = 0;
    auto factory = std::make_shared<FlyweightFactory>();

    auto flyweightOne = factory->GetFlyweightA("1");
    flyweightOne->Operation(externalState);

    auto flyweightTwo = factory->GetFlyweightA("2");
    flyweightTwo->Operation(externalState);

    externalState = 5;

    auto flyweightThree = factory->GetFlyweightB("P");
    flyweightThree->Operation(externalState);

    auto flyweightFour = factory->GetFlyweightB("Q");
    flyweightFour->Operation(externalState);

    return 0;
}
