#ifndef INTERPRETER_ABSTRACT_EXPRESSION_H_
#define INTERPRETER_ABSTRACT_EXPRESSION_H_

#include "context.h"

class AbstractExpression
{
public:
    virtual void Interpret(Context& context) = 0;

    virtual ~AbstractExpression();
};


#endif
