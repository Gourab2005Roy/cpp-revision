// Friend function.

// A friend function is a function that is not a member of a class, but is explicitly granted permission to access that class's private and protected members — something no other outside function is normally allowed to do.

#include<iostream>

class Cuboid
{
    private:
    int length;

    protected:
    int breadth;

    public:
    int height;

    Cuboid(int l = 1, int b = 1, int h = 1);

    friend int volume(Cuboid c);

    ~Cuboid();
};

Cuboid::Cuboid(int l, int b, int h)
{
    length = l;
    breadth = b;
    height = h;
}
Cuboid::~Cuboid()
{
    std::cerr<<"Cuboid class has been destroyed.\n";
}

int volume(Cuboid c)
{
    return (c.length * c.breadth * c.height);
}


int main()
{
    Cuboid cube(10, 10, 10);
    std::cout<<volume(cube)<<" is the value of the volume of the cuboid.\n";

    return 0;
}