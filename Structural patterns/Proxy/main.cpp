// Proxy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Proxy.h"

int _tmain(int argc, _TCHAR* argv[])
{
    auto actor = std::make_shared<Proxy>();

    actor->Operation();

	return 0;
}

