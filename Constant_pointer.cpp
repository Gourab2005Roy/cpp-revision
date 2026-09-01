// Constant Pointer.

/*
There are three types of constant pointer:
1. const pointer, can point to any variable, but can't change the value of the variable.
2. Pointer locked to one variable only and cannot point to any other variable.
3. Pointer locked to one variable and also can't change the inner value of the variable.
*/



// Pointer pointing to a variable and making sure that, it cannot modify the original variable using pointer.
#include<iostream>

int main()
{
    int x = 10;
    const int *p = &x; // 'p' is a pointer TO A CONST INT — meaning we cannot modify the value x through p (*p). 'p' itself is still an ordinary, reassignable pointer — only what it POINTS TO is treated as read-only.

    // ++(*p); // This cannot be performed — modifying *p is blocked, since p treats what it points to as const, even though x itself remains fully mutable.

    x++; // This is fine — x was never made const. Only ACCESS THROUGH p is restricted; direct access to x, by its own name, is completely unaffected.

    int y = 20;
    p = &y; // p is REASSIGNED to point at y instead of x. This is legal, since p itself isn't const — only the ability to MODIFY through p is restricted, and that same restriction now simply applies to y instead of x.

    std::cout<<x;

    return 0;
}



// Pointer pointing to a varible and making sure that it is pointing to only one not over others.
#include<iostream>

int main()
{
    int x = 11;

    int *const ptr = &x; // This line means that the pointer pointing to the variable is fixed and it will never move.

    ++(*ptr); // Here, we can do anytype of operations related to the variable.

    int y = 40;
    // ptr = &y; // Now, we cannot point to the variable 'y', as the pointer is locked to the variable 'x'.

    std::cout<<x;

    return 0;
}



// Now, making both the variable and the pointer locked.
#include<iostream>

int main()
{
    int x = 10;
    const int *const ptr = &x; // Now, both the variable and the pointer is being locked. Since, both the variable and the pointer is being locked, so it is impossible to point on another variable.

    return 0;
}