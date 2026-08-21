// Greatest Common Divisor.

#include<iostream>

// In this function, first of all, we are not checking which value is greater than the other.
// So, generally we are swapping the number within itself, by using the logic of storing the remainder of the modulo in the second and then ultimately swapping them.
int GCD(int first_value, int second_value)
{
    while(second_value != 0)
    {
        int temp = second_value;
        second_value = first_value % second_value;
        first_value = temp;
    }
    return first_value;
}

int main()
{
    int first_value;
    std::cout<<"Enter the first value: ";
    std::cin>>first_value;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input!!";
        return -1;
    }

    int second_value;
    std::cout<<"Enter the second value: ";
    std::cin>>second_value;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input!!";
        return -2;
    }

    std::cout<<GCD(first_value, second_value);

    return 0;
}