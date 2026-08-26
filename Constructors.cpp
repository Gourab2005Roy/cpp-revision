// The concept of 'CONSTRUCTOR' came out in a philosophical manner.
// Constructors are the one that creates an object in the CPU memory.
// Constructor is present in each and every class, though we use it or not, as constructor is present in machine code.

/*
There are two types of constructors:-
1. Default constructors.
2. User-defined constructors.
   1. Non-parameterized constructor.
   2. Parameterized constructor.
   3. Copy constructor.
*/

// Constructor will not have any return type of function.
// For understanding, we are going through a code.

#include<iostream>

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    Rectangle() // This is a non-parameterized constructor.
    {
        length = 1;
        breadth = 1;
    }
    Rectangle(int l, int b) // This is a parameterized constructor, means allowing the user to enter and reshape the length and breadth of the rectangle.
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle(& rect)) // This is "COPY CONSTRUCTOR", means we are using reference system to do.
    {
        length = rect.length;
        breadth = rect.breadth;
    }

    void setLength(int l)
    {
        if(l >= 0)
        {
            length = l;
        }
        else
        {
            length = 1;
        }
    }
    void setBreadth(int b)
    {
        if(b >= 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 1;
        }
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

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
    // Non-parameterized.
    Rectangle r;
    std::cout<<r.area()<<" "<<r.perimeter()<<"\n";
    std::cout<<r.getLength()<<" "<<r.getBreadth()<<"\n";

    // Parameterized.
    Rectangle r1(10, 100);
    std::cout<<r1.area()<<" "<<r1.perimeter()<<"\n";
    std::cout<<r1.getLength()<<" "<<r1.getBreadth()<<"\n";

    // Copy constructor one.
    Rectangle r2(r1);
    std::cout<<r2.area()<<" "<<r2.perimeter()<<"\n";
    std::cout<<r2.getLength()<<" "<<r2.getBreadth()<<"\n";
    r2.setLength(20);
    std::cout<<r2.getLength()<<"\n";
    std::cout<<r1.getLength()<<"\n";

    return 0;
}