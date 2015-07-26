// AdapterPluggable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <memory>
#include "PluggableAdapter.h"

int main()
{
    PluggableAdapter adapter(std::make_shared<AdapteeB>());
    adapter.Action(1);
	return 0;
}

