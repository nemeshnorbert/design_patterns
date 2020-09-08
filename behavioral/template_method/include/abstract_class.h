#ifndef TEMPLATE_METHOD_ABSTRACT_CLASS_H_
#define TEMPLATE_METHOD_ABSTRACT_CLASS_H_

class AbstractClass
{
public:
    void TemplateMethod();

    virtual ~AbstractClass();

protected:
    virtual void FirstPrimitiveOperation() = 0;
    virtual void SecondPrimitiveOperation() = 0;
};


#endif