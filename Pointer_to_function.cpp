// Pointer to function.

// A pointer to a function is a variable that stores the address of a function in memory, instead of the address of a regular variable.
// Think about what you already know: int *p = &x; — p holds the address of an int. A function pointer does the exact same thing, just for a function instead of a variable.

// A function pointer can point on all those function which are having same signature.
//"Signature" means: return type + parameter types (and their order). Not the function's name — the name doesn't count at all.


#include<iostream>

void display()
{
    std::cout<<"Hello!!\n";
}

int maximum(int x, int y)
{
    return (x>y? x:y);
}

int minimum(int x, int y)
{
    return (x>y? y:x);
}

int main()
{
    void (*fp)(); // Declaration.
    fp = display; // Initialization.
    (*fp)(); // Call.

    int (*fpp)(int , int); // Declaration.
    fpp = maximum; // Initialization.
    std::cout<<(*fpp)(10, 5)<<"\n"; // Call.
    fpp = minimum; // Second initialization.
    std::cout<<(*fpp)(10, 5)<<"\n"; // Second call.

    return 0;
}