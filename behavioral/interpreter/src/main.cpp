#include "terminal_expression.h"
#include "nonterminal_expression.h"

int main(int argc, char** argv)
{
    auto nonterminal = std::make_shared<NonterminalExpression>();
    nonterminal->Add(std::make_shared<TerminalExpression>());
    nonterminal->Add(std::make_shared<TerminalExpression>());

    auto start = std::make_shared<NonterminalExpression>();
    start->Add(std::make_shared<TerminalExpression>());
    start->Add(nonterminal);

    auto context = Context();
    start->Interpret(context);

    return 0;
}

