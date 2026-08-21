// Summation of array.

#include<iostream>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    std::size_t size = sizeof(a)/sizeof(a[0]);
    int sum = 0;
    int sum1 = 0;

    // Normal 'for-loop'.
    for(std::size_t i = 0; i<size; i++)
    {
        sum += a[i];
    }
    std::cout<<sum;

    // 'for-each' loop.
    for(auto x:a)
    {
        sum1 += x;
    }
    std::cout<<"\n"<<sum1;

    return 0;
}