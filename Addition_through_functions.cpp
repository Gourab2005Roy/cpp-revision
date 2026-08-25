// Performing addition through functions.

#include<iostream>

int addition(int a, int b)
{
    return (a+b); // returning the addition of the two parameters.
}

int main()
{
    int a;
    std::cout<<"Enter the value of 'a': ";
    std::cin>>a;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input!!";
        return -1;
    }

    int b;
    std::cout<<"Enter the value of 'b': ";
    std::cin>>b;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input!!";
        return -1;
    }

    std::cout<<addition(a, b)<<" is the result of the addition of the given two numbers.\n";

    return 0;
}