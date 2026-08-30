// Function overriding.

// Function over-ridding's concept is as same as that of function over-loading.
// Here, the name of the function written in the base class should be as same as that of derived class, to happen the function-over-ridding.

// This concept lies under 'POLYMORPHISM'.

// The derived class will be inheriting from base class.

// In function over-riding, each and everything in the function should be same.
// If it is not the same, then it won't be called as function over-riding. 
// But if we want to operate the function that is not matching exactly like the base class function, then we need to do the operation seperatly.


#include<iostream>

class Parent
{
    public:
    void display()
    {
        std::cout<<"Displaying Parent class function.\n";
    }
};

class Derived : public Parent
{
    public:
    void display()
    {
        std::cout<<"Displaying Derived classs function.\n";
    }
};


int main()
{
    Parent p;
    p.display();

    Derived d;
    d.display();


    return 0;
}