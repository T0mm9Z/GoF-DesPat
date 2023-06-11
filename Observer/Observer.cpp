#include <iostream>
#include <vector>

class Subject;

class Observer
{
private:
    /* data */
public:
    
    virtual ~Observer(){}
    virtual int getState() = 0;
    virtual void update( Subject *subject ) = 0;
    // ...
};


class Subject
{
private:
    /* data */
public:
    Subject(/* args */);
    ~Subject();
    virtual void Attach() = 0;
    virtual void Detach() = 0;
    void Notify();
    std::vector<Observer> observers;
};

Subject::Subject(/* args */)
{
}

Subject::~Subject()
{
}



