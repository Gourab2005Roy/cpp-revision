// Here, we gonna learn about functions.

// Function is a piece of code, which perform specific task, may be a small task, but it performs completely.
// Function are useful for procedural/modular programming.
// If we once use a function, then we can re-use it as many time as dwe want, as well as  we can use it on different code and can share it with the user's.
// Collection of functions is called as 'LIBRARY'.

// Example:
#include<iostream>

void display()
{
    std::cout<<"Hello!!";
}

std::string display_string()
{
    return "String !!";
}

int main()
{
    display();
    std::cout<<"\n"<<display_string();
    return 0;
}