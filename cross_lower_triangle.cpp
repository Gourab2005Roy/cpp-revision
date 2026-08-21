// Cross Lower Triangle.

/*
   *
  **
 ***
****
*/

#include<iostream>

int main()
{
    for(std::size_t i = 0; i<4; i++)
    {
        for(std::size_t j = 0; j<4; j++)
        {
            if((i+j) >= 3)
            {
                std::cout<<"*";
            }
            else
            {
                std::cout<<" ";
            }
        }
        std::cout<<"\n";
    }
    return 0;
}