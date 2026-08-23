// Pointers.

// Here, we will understand how, pointers work.



#include<iostream>

int main()
{
    int x = 10;
    int *p; // Initializing a pointer.

    p = &x; // pointing the pointer in the address of 'x'.

    std::cout<<x<<"\n"; // It prints the value inside 'x'.
    std::cout<<p<<"\n"; // It prints the address of 'x' that's been stored in 'p'.
    std::cout<<*p<<"\n"; // It prints the value of the address in which 'p' is focusing.
    std::cout<<&p<<"\n"; // It prints the address value of 'p'.
    std::cout<<&x; // It prints the address value of 'x';

    return 0;
}