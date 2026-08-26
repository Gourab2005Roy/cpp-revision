// Here, we gonna create a class and see how its been used.

#include<iostream>

class Rectangle // This is the class.
{
    public: // It is mandatory to write, if not, then by default everything will become private.
    int length;
    int breadth;

    int area() // functions.
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
    Rectangle r; // 'r' is the object of the class 'Rectangle'.

    r.length = 10;
    r.breadth = 20;

    std::cout<<r.area()<<"\n";
    std::cout<<r.perimeter()<<"\n";

    Rectangle r1;
    r1.length = 100;
    r1.breadth = 200;
    std::cout<<r1.area()<<"\n";
    std::cout<<r1.perimeter()<<"\n";

    return 0;
}