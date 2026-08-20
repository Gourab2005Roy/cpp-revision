// Maximum of two numbers.

/*
'std::cin.fail()' ---- It only does the checking, it doesn't read anything, based on the checking it decided whether to allow or not.

'!(std::cin>>variable_name)' ---- It does both reading and checking..
*/

#include<iostream>

int main()
{
    int x;
    std::cout<<"Enter the value of first number: ";
    if(std::cin.fail() || (!(std::cin>>x)))
    {
        std::cout<<"Invalid input.\n";
        return -1;
    }
    
    int y;
    std::cout<<"Enter the value of second number: ";
    if(std::cin.fail() || (!(std::cin>>y)))
    {
        std::cout<<"Invalid input.\n";
        return -1;
    }

    if(x>y)
    {
        std::cout<<"The greater number among the two is "<<x;
    }
    else
    {
        std::cout<<"The greaer number among the two is "<<y;
    }

    return 0;
}