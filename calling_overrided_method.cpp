// Calling overrided method.


// Using a base class pointer, when we call a over-rided function, then base-class function will be called.

#include<iostream>

class Base
{
    public:
    void fun()
    {
        std::cout<<"Function of base.\n";
    }
};

class Derived : public Base
{
    public:
    void fun()
    {
        std::cout<<"Function of derived.\n";
    }
};

int main()
{
    Base *p;
    p = new Derived ();

    p->fun();

    delete p;
    p = nullptr;

    return 0;
}