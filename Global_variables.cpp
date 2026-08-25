// Global variables.

// Global variable are those variable which are present / declared outside of the code.
// Global variable are the one that can access to each and everypart of the code.


#include<iostream>

int global = 10;

int main()
{
    int a = 10;
    std::cout<<global<<"\n";

    for(std::size_t i = 1; i<=5; i++)
    {
        global += a;
    }

    std::cout<<global<<" is the updated one.\n";
    
    return 0;
}