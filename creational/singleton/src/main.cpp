// Singleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Singleton.h"

int _tmain(int argc, _TCHAR* argv[])
{
    Singleton::Instance().Action();
	return 0;
}

