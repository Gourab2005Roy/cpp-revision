// Template class.

#include<iostream>

template <class t>
class Rectangle
{
    private:
    t length;
    t breadth;

    public:
    Rectangle(t l = 0, t b = 0);

    t getLength();
    t getBreadth();

    t area();
    t perimeter();

    ~Rectangle(){};
};

template<class t>
Rectangle<t>::Rectangle(t l, t b)
{
    length = l;
    breadth = b;
}

template <class t>
t Rectangle<t>::area()
{
    return (length * breadth);
}

template <class t>
t Rectangle<t>::perimeter()
{
    return (2 * (length + breadth));
}

template <class t>
t Rectangle<t>::getLength()
{
    return length;
}

template <class t>
t Rectangle<t>::getBreadth()
{
    return breadth;
}


int main()
{
    int length;
    std::cout<<"Enter the value of length: ";
    std::cin>>length;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input.\n";
        return -1;
    }

    int breadth;
    std::cout<<"Enter the value of breadth: ";
    std::cin>>breadth;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input.\n";
        return -2;
    }

    Rectangle<int> r(length, breadth);
    std::cout<<r.area()<<" and "<<r.perimeter()<<" is the value of area and perimeter of the rectangle.\n";
    std::cout<<r.getLength()<<" and "<<r.getBreadth()<<" is the respctive value of length and breadth of the object.\n";

    return 0;
}