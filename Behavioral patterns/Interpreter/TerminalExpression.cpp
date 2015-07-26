#include "stdafx.h"

#include <iostream>

#include "TerminalExpression.h"

TerminalExpression::~TerminalExpression()
{

}

void TerminalExpression::Interpret(Context& context)
{
    std::cout << "TerminalExpression::Interpret(" << context.data << ")\n";
}
