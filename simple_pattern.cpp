// Printing a simple pattern in multi-dimensional.

/*
* * * * 
* * * * 
* * * * 
* * * * 
*/

#include<iostream>

int main()
{
    char a = '*';
    for(std::size_t i = 0; i<4; i++)
    {
        for(std::size_t j = 0; j<4; j++)
        {
            std::cout<<a<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}