// Short-circuiting.
// This concept is similar to that of logical operator.

// It is a programming concept, in which the compiler skips the execution/evaluation of some sub-expressions in a logical expression.
// This concept is only acceptable with '&&' and '||'.

#include<iostream>

int main()
{
    int x = 10;
    int y = 20;
    int z = 30;

    if(x<y && x<z) // It will get executed.
    {
        std::cout<<"Printed the first statement.\n";
    }

    if(x<y && x>z) // It won't execute.
    {
        std::cout<<"Printed the second statement.\n";
    }

    if(x<y || x>z) // It will get executed.
    {
        std::cout<<"Printed the third statement.\n";
    }
    
    if(x<y || x<z) // It will get executed.
    {
        std::cout<<"Printed the forth statement.\n";
    }

    return 0;
}