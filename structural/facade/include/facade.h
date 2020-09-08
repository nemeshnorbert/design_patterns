#ifndef FACADE_FACADE_H_
#define FACADE_FACADE_H_

#include "subsystem_one.h"
#include "subsystem_two.h"
#include "subsystem_three.h"
#include "subsystem_four.h"

class Facade
{
public:
    void MethodAC();

    void MethodBD();

public:
    SubsystemOne subsystemOne_;
    SubsystemTwo subsystemTwo_;
    SubsystemThree subsystemThree_;
    SubsystemFour subsystemFour_;
};


#endif


