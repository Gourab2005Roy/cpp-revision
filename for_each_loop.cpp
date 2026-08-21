// For each loop..

// For each loop is a type of loop that goes through each and every element of the array.

#include<iostream>

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    for(auto x:a) // 'auto' generally fetches everything from the array, no matter about the data-type of the elements present in the array.
    {
        std::cout<<x;
    }
    return 0;
}