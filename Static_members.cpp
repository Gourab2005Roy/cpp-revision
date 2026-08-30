// Static members.

// Static member is a type of member in a class, that behaves like a global variable inside that specific class.
// It doesn't come with any object, but it has been shared with each and every object.

// If we make a variable static, then it will occupy memory only once.
// It won't occupy much memory, as it is been shared with each and everyone.

// We need to declare the static variable twice. Once, within the class and the other outside of the class.

// It is mandatory to declare it in the 'public' section, because we are assigning the value outside of the class.

// Usually static member is a type of global variable member, we use it inside a specific class, in-order to operate it.
// Initialization of the static member is done after the completion of the class.
// If we want to initialize the static member before the class, we can't do it, because, technically we cannot initialize something in the name of class, before the declaration of the class.


#include<iostream>

class Test
{
    private:
    int a;
    int b;

    public:
    // Static variable member.
    static int count;  // This is the declaration, here, we are not allowed to initialize any type of value.
    // If we initialize some sort of values, then it would lead to linker error.

    Test(int a = 0, int b = 0);

    ~Test(){};
};
int Test::count = 0;  // Here, we are initializing / assigning the value of the static variable.

Test::Test(int a, int b)
{
    this->a = a;
    this->b = b;
    count++;
}


int main()
{
    Test t1(10, 10); // Count changes from 0 to 1.
    Test t2(10, 10); // Count changes from 1 to 2.
    Test t3(10, 10); // Count changes from 2 to 3.
    Test t4(10, 10); // Count changes from 3 to 4.

    std::cout<<t1.count<<" is the first count.\n"; // Prints 4.
    std::cout<<t2.count<<" is the second count.\n"; // Prints 4.
    t2.count = 100;
    std::cout<<t3.count<<" is the third count.\n"; // Prints 100.
    std::cout<<t4.count<<" is the forth count.\n"; // Prints 100.

    return 0;
}