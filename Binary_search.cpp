// Binary search.

// Finding the 'key' or 'target' element in an array.
// The process of finding the 'key' or 'target' element depends upon the 'key' or 'target' itself.
// We generally use two variables, pointing in the both end of the array.
// Then shifting either of them depending upon the 'mid' and the 'key' or 'target' value.
// If the 'key' or 'target' is greater than the 'mid', then the 'lower' value gets shifted to 'mid+1'. But, in the other case, the 'higher' value gets shifted to 'mid-1'.

#include<iostream>

int main()
{
    int a[] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    std::size_t size = sizeof(a)/sizeof(a[0]);
    std::size_t lower = 0;
    std::size_t higher = size-1;

    int key = 28;

    while(lower <= higher)  // Mandatory condition to be checked, that 'lower must be lower or equal to higher', if the case didn't meet the condition, then the key value is not present.
    {
        std::size_t mid = lower + ((higher-lower)/2);

        if(key == a[mid])
        {
            std::cout<<"Key found in the index "<<mid;
            return 1;
        }
        else if(key > a[mid])
        {
            lower = (mid+1);
        }
        else
        {
            higher = (mid-1);
        }
    }
    std::cerr<<"Key not found.";

    return 0;
}