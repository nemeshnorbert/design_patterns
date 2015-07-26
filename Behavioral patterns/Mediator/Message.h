#ifndef MEDIATOR_MESSAGE_H_
#define MEDIATOR_MESSAGE_H_

#include <string>

class Message
{
public:
    Message(const std::string& text);

    const std::string& Text() const;

private:
    std::string text_;
};


#endif