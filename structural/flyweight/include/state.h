#ifndef FLYWEIGHT_STATE_H_
#define FLYWEIGHT_STATE_H_

class State
{
public:
    State();

    State(int data);

    int GetData() const;

private:
    int data_;
};


#endif 


