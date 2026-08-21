// Maximum element.


#include<iostream>
#include<climits>

int main()
{
    int a[] = {4, 8, 6, 9, 5, 2, 7};
    std::size_t size = sizeof(a)/sizeof(a[0]);

    int max = INT_MIN;

    for(std::size_t i = 0; i<size; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    std::cout<<"The maximum element in the array: "<<max;

    return 0;
}