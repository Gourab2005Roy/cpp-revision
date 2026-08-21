// Cross upper triangle.

/*
****
***
**
*
*/

#include<iostream>

int main()
{
    for(std::size_t i = 0; i<4; i++)
    {
        for(std::size_t j = 0; (i+j)<4; j++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}