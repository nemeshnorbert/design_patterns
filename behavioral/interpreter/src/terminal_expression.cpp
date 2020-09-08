#include <iostream>

#include "terminal_expression.h"

TerminalExpression::~TerminalExpression()
{

}

void TerminalExpression::Interpret(Context& context)
{
    std::cout << "TerminalExpression::Interpret(" << context.data << ")\n";
}
