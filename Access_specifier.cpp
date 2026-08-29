// Access Specifier.

// It is the concept through which we can understand, which part are accessible and which are not.
// Out of 'private', 'protected' and 'public', we can and cannot access all the three parts.

// In the base class, we can access all the three things.
// In the derived class, we can access only to 'public' and 'protected'.
// As an object, we can access only to 'public'.

// So, it is very important to understand, on which part we can get access.


#include<iostream>

class Base
{
    private:
    int a;
    
    protected:
    int b;

    public:
    int c;
    
    void fun()
    {
        a = 10;
        b = 10;
        c = 10;
    }
};

class Derived : Base
{
    public:
    void fun()
    {
        // a = 20; // We cannota access this member, as it is in the private section of the 'Base' class.
        b = 20;
        c = 20;
    }
};

int main()
{
    Base b;
    // b.a = 19; // We cannot access this member, as it is in the private section of the 'Base' class.
    // b.b = 29; // We cannot access this member, as it is in the protected section of the 'Base' class.
    b.c = 30; // We can access this member, as it is in the public section of the 'Base' class.

    return 0;
}