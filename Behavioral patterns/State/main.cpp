// State.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Context.h"
   

int _tmain(int argc, _TCHAR* argv[])
{
    Context context;
    for (size_t iteration = 0; iteration < 10; ++iteration)
    {
        context.Request();
    }
    
	return 0;
}

