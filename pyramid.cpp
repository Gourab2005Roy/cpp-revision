// Printing pyramid.

/*
   *
  ***
 *****
*******
*/

#include<iostream>

int main()
{
    int n = 4;

    for(std::size_t i = 0; i<n; i++)
    {
        for(std::size_t j = 0; j<(n-i-1); j++)
        {
            std::cout<<" ";
        }
        for(std::size_t k = 0; k<(2*i+1); k++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}