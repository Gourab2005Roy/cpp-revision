// Inverted Pyramid.

/*
*******
 *****
  ***
   *
*/

#include<iostream>

int main()
{
    int n = 4;

    for(std::size_t i = 0; i<n; i++)
    {
        for(std::size_t k = 0; k<i; k++) // The condition is used for printing the ' '.
        {
            std::cout<<" ";
        }
        for(std::size_t j = 0; j<(2*(n-i)-1); j++) // The condition here tells us, how many times '*' should be printed.
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}