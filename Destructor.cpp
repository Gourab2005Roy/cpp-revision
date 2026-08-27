// Destructor is the opposite of constructor.
// The main role of 'DESTRUCTOR' is to destroy the constructor by the end of the program.

// Constructor is used for initialization purposes. It is also used for allocating resources.
// Destructor is used for de-allocating resources, releasing the resources, as we don't need to initialize, we have to de-allocte the resources, external typeof resources.
// We cannot have multiple 'DESTRUCTOR'.
// A destructor don't have any return type, means letting not to return anything.
// All the rules of constructors are followed by destructors, expect the part of over-loading.

// If we make an object normally, then by default, the object will be created in the 'stack' and both the constructor and the destructor will be called together.
// If we make an object dynamically, then by default, only the constructor is being called, but the destructor is not being called.
// To call the destructor we need to make call the destructor, by deleting the pointer, through which the object is being made within the heap.

// Here, we are going to call the delete as 'delete p' not as 'delete []p'. Because, both of them has different meaning.
// 'delete p' it denotes the deletion of singe memory allocated.
// 'delete []p' it denotes the deletion of the element of array.


/*
Take-away points:
1. Test t, t1, t2, t3;
    Objects are destroyed in the reverse order of their creation. In this case, t3 is the first to be destroyed, while t is the last.
2. Destructor has the same name as their class name preceded by a tilde (~) symbol.
3. It is not possible to define more than one destructor.
4. The destructor is only one way to destroy the object created by the constructor. Hence, destructor cannot be overloaded.
5. It cannot be declared static or const.
6. Destructor neither requires any argument nor returns any value.
7. It is automatically called when an object goes out of scope. 
8. Destructor release memory space occupied by the objects created by the constructor.
9. In destructor, objects are destroyed in the reverse of an object creation.

Calling destructor explicitly:
object_name.~class_name()
*/



#include<iostream>

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    }
    int area();
    int perimeter();
    ~ Rectangle();
};

int Rectangle::area()
{
    return (length * breadth);
}
int Rectangle::perimeter()
{
    return (2 * (length + breadth));
}
Rectangle::~Rectangle()
{
    // destructor body — can be empty if there's nothing special to clean up.
    std::cout << "Rectangle destroyed\n";   // just to visibly confirm when it runs, optional
}


int main()
{
    Rectangle r(10, 10);
    std::cout<<r.area()<<" "<<r.perimeter()<<"\n";

    Rectangle r1(10);
    std::cout<<r1.area()<<" "<<r1.perimeter()<<"\n";

    return 0;
}