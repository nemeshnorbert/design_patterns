#include "facade.h"

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
