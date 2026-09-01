// Exception handling means handling the exception that can occur.

// In exception handling we use 'try', 'throw' and 'catch'.
// In try block, we try and see it out.
// Through throw, we throw the value.
// In catch block, we catch the things thrown by the throw.

// In try block, we use if statement, if the condition in the 'if' statement matches, then it will directly execute the 'catch' block.
// If the condition in the 'if' statement doesn't matches, then it will not enter in the 'catch' statement and it will go for the rest of the part in the 'try' block.


// 'throw' can be of integer, double, float, char and string.
// We can also 'throw' an object of a class. And for throwing an object, we need to use built-in class in C++ known as 'exception'.


#include<iostream>

int main()
{
    int a;
    std::cout<<"Enter the value of the numerator: ";
    std::cin>>a;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input.\n";
        return -1;
    }

    int b;
    std::cout<<"Enter the value of the denomenator: ";
    std::cin>>b;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input.\n";
        return -2;
    }

    int c;

    try
    {
        if(b == 0)
        {
            throw 1;
        }
        c = a/b;
        std::cout<<c<<" is the value of the division.\n";
    }
    catch(const int e)
    {
        std::cerr <<"The entered value of the denomenator is '0'.\n";
    }
    
    return 0;
}