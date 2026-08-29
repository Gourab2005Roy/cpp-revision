// Constructor in Inheritance.

// It is used from one class to another class.
// It plays a very big role, while inheriting from something.

// One important thing in 'constructor in inheritance' is that, if we use an object, then it first call the main first class, then the inherited class.
// It happens, if we call through the inherited class's object.
// If we are making an object of previous class, then it only behaves like a normal call.

// Another important thing is that, it will always execute the default constructor of the class from which something is inheriting.
// It will display that constructor only, untill and unless we pass any specific value to execute it.

#include<iostream>

class base
{
    public:
    base()  // Default constructor.
    {
        std::cout<<"Default base."<<"\n";
    }

    base(int a)  // Parameterised constructor.
    {
        std::cout<<"Parameterised base."<<a<<"\n";
    }
};

class derive : public base
{
    public:
    derive()  // Default constructor.
    {
        std::cout<<"Default derive."<<"\n";
    }

    derive(int d)  // Parameterised constructor.
    {
        std::cout<<"Parameterised derive."<<d<<"\n";
    }

    // This is used for accessing both the parameterised part, present within the constructor.
    // Within it, we can use the same variable that we have used or otherwise different variable and implement it.
    derive (int x, int r) : base(r)  // This is very important.
    {
        std::cout<<"Parameterised derive."<<x<<"\n";
    }
};

int main()
{
    derive d1;  // It is displaying both 'default part of the constructor'.
    std::cout<<"\n";

    derive d2(4);  // It is displaying, 'default base' and 'parameterised derive. 4'.
    std::cout<<"\n";
    
    derive d3(10, 5);  // It is displaying both 'parameterised part of the constructor'.
    
    return 0;
}