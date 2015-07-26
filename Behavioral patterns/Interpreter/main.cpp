// Interpreter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "TerminalExpression.h"
#include "NonterminalExpression.h"

int _tmain(int argc, _TCHAR* argv[])
{
    auto nonterminal = std::make_shared<NonterminalExpression>();
    nonterminal->Add(std::make_shared<TerminalExpression>());
    nonterminal->Add(std::make_shared<TerminalExpression>());

    auto start = std::make_shared<NonterminalExpression>();
    start->Add(std::make_shared<TerminalExpression>());
    start->Add(nonterminal);

    start->Interpret(Context());
	
    return 0;
}

