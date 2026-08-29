// Here, we gonna see another example of 'INHERITANCE'.

#include<iostream>

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l = 1, int b = 1);

    int getLength();
    int getBreadth();

    int area();
    int perimeter();

    ~Rectangle();
};

class Cuboid : public Rectangle
{
    private:
    int height;

    public:
    Cuboid(int l, int b, int h);

    int getHeight();

    int volume();
    int perimeter();

    ~Cuboid();
};

int main()
{
    Rectangle r(10, 10);
    std::cout<<r.area()<<" "<<r.perimeter()<<" is the value of area and perimeter of the Rectangle.\n";
    std::cout<<r.getLength()<<" "<<r.getBreadth()<<" is the value of length and breadth of Rectangle.\n";

    Cuboid c(20, 20, 20);
    std::cout<<c.volume()<<" "<<c.perimeter()<<" is the value of volume and perimter of the Cuboid.\n";
    std::cout<<c.getLength()<<" "<<c.getBreadth()<<" "<<c.getHeight()<<" is the value of length, breadth, and height of the Cuboid.\n";
    std::cout<<c.area()<<" is the value of the area of cuboid to see, whether it can actually access the parent classes function.\n";


    return 0;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}
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
    std::cerr<<"Rectangle class destroyed.\n";
}

Cuboid::Cuboid(int l, int b, int h) : Rectangle(l, b)
{
    height = h;
}
int Cuboid::volume()
{
    return (getLength() * getBreadth() * height);
}
int Cuboid::perimeter()
{
    return (4 *(getLength() + getBreadth() + height));
}
int Cuboid::getHeight()
{
    return height;
}
Cuboid::~Cuboid()
{
    std::cerr<<"Cuboid class destroyed.\n";
}
