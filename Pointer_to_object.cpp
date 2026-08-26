// Pointer to object.

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
    Rectangle r; // Normal object.
    Rectangle *p; // Pointer object.

    p = &r; // The pointer is pointing to the address of the object 'r', and then accessing it in the normal way as we saw and did before.
    p->length = 11;
    p->breadth = 20;

    std::cout<<p->area()<<"\n";
    std::cout<<p->perimeter()<<"\n";

    return 0;
}