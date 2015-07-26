#ifndef FACADE_FACADE_H_
#define FACADE_FACADE_H_

#include "SubsystemOne.h"
#include "SubsystemTwo.h"
#include "SubsystemThree.h"
#include "SubsystemFour.h"

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


