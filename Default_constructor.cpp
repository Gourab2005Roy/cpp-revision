// Default constructor.

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
    // Default parameterized.
    Rectangle r(10, 100);
    std::cout<<r.area()<<" "<<r.perimeter()<<"\n";
    std::cout<<r.getLength()<<" "<<r.getBreadth()<<"\n";

    Rectangle r1(10);
    std::cout<<r1.area()<<" "<<r1.perimeter()<<"\n";
    std::cout<<r1.getLength()<<" "<<r1.getBreadth()<<"\n";

    return 0;
}