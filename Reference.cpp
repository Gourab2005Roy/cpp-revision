// Reference
// It is one of the most powerful features present only in C++.
// We cannot declare a 'reference' without initializing it.

// One variable having another nick name.
// The referenced one is also known as the "ALIAS".
// The memory location will be the same for both the original and for the referene one.
// Once a reference is used, then re-using the same reference for another variable is not possible.

// We can do the operation, by using the original or referene name.
// Once a operation is done, we can print-out the value by using the reference name or by using the original.

/*
l-value ---->  l-value are those, who have an address location of itself.

r-value ---->  r-value are those value, which can have temporary assignment to them, means, they have no memory.
They exist with the duration of code.
*/


#include<iostream>

int main()
{
    int x = 10;
    int &y = x; // Reference

    std::cout<<x<<" "<<y<<"\n";
    
    x++;
    std::cout<<x<<" "<<y<<"\n";

    y = y+10;
    std::cout<<x<<" "<<y<<"\n";


    int &&z = 20; // It is an r-value, cause, it has no memory location of its own.
    std::cout<<z;

    return 0;
}