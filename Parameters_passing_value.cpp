// Pass by value. OR Call by value.

// Means passing value to the function's parameters.
// The value that's being passed to the function has no influence on the main value.


#include<iostream>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout<<a<<" "<<b<<" is the swapped one.\n";
}

int main()
{
    int a = 1;
    int b = 2;

    swap(a, b);
    std::cout<<a<<" "<<b<<" is the original one.\n";

    return 0;
}