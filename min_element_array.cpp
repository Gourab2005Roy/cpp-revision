// Minimum element.


#include<iostream>
#include<climits>

int main()
{
    int a[] = {4, 8, 6, 9, 5, 2, 7};
    std::size_t size = sizeof(a)/sizeof(a[0]);

    int min = INT_MAX;

    for(std::size_t i = 0; i<size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    std::cout<<"The minimum element in the array: "<<min;

    return 0;
}