#include "stdafx.h"
#include "Adapter.h"


void Adapter::Action(int param1)
{
    instance.Operation(param1, 0);
}
