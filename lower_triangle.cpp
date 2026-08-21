// Lower Triangle.

/*
*
* * 
* * *
* * * *
*/

#include<iostream>

int main()
{
    char a = '*';

    for(std::size_t i = 0; i<4; i++)
    {
        for(std::size_t j = 0; j<=i; j++)
        {
            std::cout<<a;
        }
        std::cout<<"\n";
    }
    return 0;
}
