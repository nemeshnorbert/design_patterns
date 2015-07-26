#ifndef INTERPRETER_NONTERMINAL_EXPRESSION_H_
#define INTERPRETER_NONTERMINAL_EXPRESSION_H_

#include <list>
#include <memory>

#include "AbstractExpression.h"

class NonterminalExpression : public AbstractExpression
{
public:
    virtual void Interpret(Context& context) override;

    void Add(std::shared_ptr<AbstractExpression> expression);

    virtual ~NonterminalExpression();

private:
    std::list<std::shared_ptr<AbstractExpression>> expressions_;
};


#endif