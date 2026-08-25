// Return by reference.

#include<iostream>

int &fun(int &x) // "For a function to give you back a reference to a variable (instead of a copy), its return type must be declared with & — e.g. int &fun(...) — at the point where the function is written/declared. Calling the function afterward looks completely normal, no & needed there."
{
    return x;
}

int main()
{
    int a = 100;
    std::cout<<fun(a)<<"\n";
    fun(a) = 200; // Here, 'fun(a)' is behaving as a reference.
    std::cout<<a<<" "<<fun(a)<<"\n";
    return 0;
}