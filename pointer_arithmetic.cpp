// Performing arithmetic operations using pointer.

#include<iostream>

int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int *p = a;
    int *q = &a[3];

    // Incrementing.
    p++; // now, the pointer is pointing in the next index.
    std::cout<<*p<<"\n";

    // Decrementing.
    p--; // now, the pointer is pointing back in the original index.
    std::cout<<*p<<"\n";

    // Incrementing by 2.
    p = p+2; // now, the pointer is pointing 2 step ahead from the original position.
    std::cout<<*p<<"\n";

    // Decrementing by 2.
    p = p-2; // now, the pointer is pointing back in the original index.
    std::cout<<*p<<"\n";

    int d = q-p; // It helps to calculate how far each pointer are from each other.
    // If the value is positive, then 'q' is far from that of 'p', else, 'p' is far from that of 'q'.
    std::cout<<d<<"\n";


    return 0;
}