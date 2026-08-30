// Virtual function overrided.

// Using a base class pointer derived class object, when we call a over-rided function, then base-class function will be called.
// But, we want to call the function that is in the derive class, then we need to introducte the concept of 'virtual'.

// As / Since, we used 'virtual' the pointer is not pointing to that function and it is pointing to the over-rided function.
// This is the type of ambiguity, we face we use 'base class pointer derived object'.
// In C++ 'virtual', is used to enable polymorphism, not just for clarity. It's about allowing functions to be overridden in derived classes, which helps in run-time behaviour rathr than just making the code cleaner.

// It is mandatory to add 'override' beside the function, that we are accessing from the virtual.

// This is runtime polymorphism.


#include<iostream>

class Base
{
    public:
    virtual void fun()
    {
        std::cout<<"First function.\n";
    }
};

class Derived : public Base
{
    public:
    void fun() override
    {
        std::cout<<"Second function.\n";
    }
};

int main()
{
    Base *p;
    p = new Derived();
    
    p->fun();

    delete p;
    p = nullptr;
    return 0;
}