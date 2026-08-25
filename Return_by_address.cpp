// Return by address.


#include<iostream>

int *fun(int size)
{
    int *p = new int[size]; // Pointer 'p' dies itself, as the function ends.
    for(std::size_t i = 0; i<size; i++)
    {
        p[i] = (i+1);
    }
    return p;
}

int main()
{
    int *q = fun(5);
    for(std::size_t i = 0; i<5; i++)
    {
        std::cout<<q[i]<<" ";
    }
    delete[] q;
    q = nullptr;

    return 0;
}