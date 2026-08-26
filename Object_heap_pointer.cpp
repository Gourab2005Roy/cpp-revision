// Creating an Object in Heap using POINTER.

#include<iostream>

class Rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return (length * breadth);
    }
    int perimeter()
    {
        return (2 * (length + breadth));
    }
};

int main()
{
    Rectangle *p = new Rectangle(); // Pointer-object created a new object in the heap.
    p->length = 10; // We use '->' for accessing through pointer, else use '.'
    p->breadth = 10;

    std::cout<<p->area()<<"\n";
    std::cout<<p->perimeter()<<"\n";

    delete p;
    p = nullptr;

    return 0;
}