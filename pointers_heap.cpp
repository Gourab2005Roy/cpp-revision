// Pointers making storing in the heap.

// Here, we will see how a pointer stores its value in the heap.


#include<iostream>

int main()
{
    int x = 10;

    int *p = new int; // The pointer is pointing to a random space that's been located in the heap.
    *p = x; // Here, the value of 'x' is stored in the pointer, not the address of 'x'.

    delete p; // It is mandatory to delete 'p'. If we don't delete, the pointer, then the value is being stored in the heap forever, and we won't be able to delete the value afterwise, once the program is being haulted.
    p = nullptr; // Then assigning the pointer into a NULL value. Making sure, that the pointer points to nothing except 'NULL' itself. 

    // If we point the pointer to 'NULL' value before deleting, then it will lead to another mess.

    return 0;
}