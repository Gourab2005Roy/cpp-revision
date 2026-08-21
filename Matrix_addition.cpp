// Addition of two matrices.

#include<iostream>

int main()
{
    int a[2][3] = {{2, 5, 9}, {7, 5, 0}};
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int c[2][3];

    // Adding matrix 'a' and 'b' and resulting into 'c'.
    for(std::size_t i = 0; i<2; i++)
    {
        for(std::size_t j = 0; j<3; j++)
        {
            c[i][j] = (a[i][j] + b[i][j]);
        }
    }

    // Printing the matrix 'c'.
    for(std::size_t i = 0; i<2; i++)
    {
        for(std::size_t j = 0; j<3; j++)
        {
            std::cout<<c[i][j]<<"\t";
        }
        std::cout<<"\n";
    }

    return 0;
}