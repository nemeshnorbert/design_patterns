#include "stdafx.h"
#include "Facade.h"

void Facade::MethodBD()
{
    subsystemTwo_.MethodB();
    subsystemFour_.MethodD();
}

void Facade::MethodAC()
{
    subsystemOne_.MethodA();
    subsystemThree_.MethodC();
}
