#include "nonterminal_expression.h"

NonterminalExpression::~NonterminalExpression()
{

}

void NonterminalExpression::Add(std::shared_ptr<AbstractExpression> expression)
{
    expressions_.push_back(expression);
}

void NonterminalExpression::Interpret(Context& context)
{
    context.data++;
    for (const auto& expression : expressions_)
    {
        expression->Interpret(context);
    }
    context.data--;
}
