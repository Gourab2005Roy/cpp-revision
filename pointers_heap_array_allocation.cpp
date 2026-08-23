// Allocating an array in the heap using pointers.


#include<iostream>

int main()
{
    int *p = new int[5]; // Here an array of size '5' is being allocated in the heap. If we initialize the array, then it gonna have some value in it, else it will be filled with '0' in each and every position.

    for(std::size_t i = 0; i<5; i++)
    {
        p[i] = (i+1);
        *(p + i) = (i+1);   // identical to p[i] = (i+1);
    }

    // Another method.
    int *temp = p;   // keep p pointing at the start; use a copy to walk
    for(std::size_t i = 0; i<5; i++)
    {
        *temp = (i+1);
        temp++;        // move to the next heap slot
    }

    delete[] p; // For deleting the array located in the heap.
    p = nullptr;

    return 0;
}