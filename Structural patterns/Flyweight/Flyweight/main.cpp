// Flyweight.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "FlyweightFactory.h"

int main()
{
    State externalState = 0;
    auto factory = std::make_shared<FlyweightFactory>();

    auto flyweightOne = factory->GetFlyweightA("1");
    flyweightOne->Operation(externalState);

    auto flyweightTwo = factory->GetFlyweightA("2");
    flyweightTwo->Operation(externalState);

    externalState = 5;

    auto flyweightThree = factory->GetFlyweightA("P");
    flyweightThree->Operation(externalState);

    auto flyweightFour = factory->GetFlyweightA("Q");
    flyweightFour->Operation(externalState);

	return 0;
}