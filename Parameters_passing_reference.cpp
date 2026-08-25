// Pass by reference. OR Call by reference.

// Can be used, whenever we want the original value to be modified.
// We should nowwrite any complex logic inside the function, if we are using 'pass by reference OR call b reference'.

// In this the function gets copied to the main code. As a result, this is also known as 'in-line function'.


#include<iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout<<a<<" "<<b<<" is the swapped one.\n";
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    std::cout<<a<<" "<<b<<" is the real one.\n";

    return 0;
}