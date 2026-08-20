// Logical operator.
// This operator is used mostly in 'Conditional Statement'.

// There are 3 types of Logical operator: '&&', '||', '!'

// '&&' works, if both the cases are true.
// '||' works, if any one of the case is true.
// '!' means, not..

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