// Static variable.

// Static variable are those variable which are present / declared inside a function.
// Static variable are the one that can access to each and everypart of the function, in which it is being declared.
// Static variable act as Global variable only inside a function.


#include<iostream>

int main()
{
    static int x = 10;
    int a = 0;

    std::cout<<a<<" "<<x<<"\n";
    
    for(std::size_t i = 1; i<=5; i++)
    {
        a += x;
        x++;
    }
    std::cout<<a<<" "<<x<<"\n";

    return 0;
}