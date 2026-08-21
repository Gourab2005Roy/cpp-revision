// Linear search

// Finding the 'key' or 'target' element in the array, but by thorough search.

#include<iostream>

int main()
{
    int a[] = {6, 11, 25, 8, 15, 7, 12, 20, 9, 14};
    std::size_t size = sizeof(a)/sizeof(a[0]);

    int key = 12;

    for(std::size_t i = 0; i<size; i++)
    {
        if(key == a[i])
        {
            std::cout<<"Key found in the index "<<i;
            return 1;
        }
    }
    std::cerr<<"Key not found.";

    return 0;
}