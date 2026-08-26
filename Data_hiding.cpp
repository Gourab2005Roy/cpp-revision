// Data-hiding is one of the most useful and concentrative part / thing, if we are using 'CLASS AND OBJECT'.
// We use 'DATA-HIDING', just to protect our most sensible things from the user and ultimately, saving our own live.
// For doing 'DATA-HIDING', we need to keep the 'data-member' secret and make only the 'function' part public.
// Due to being privatising the 'data-member', we cannot assigning anything to it, so, for assigning value to the 'data-member', we need to use function.
// We are assigning value to 'data-member' using function, because, only function is public.

// Property function: 
// Accessor -> get_ _ _ _
// Mutator -> set_ _ _ _

// It is very important to code each and everything in "CLASS" portion perfectly.

#include<iostream>

class Rectangle
{
    private:
    int length;
    int breadth;

    public: // We are making the rest of the part as public, because, the rest of the part is of function.
    void setLength(int l) // Setting the value of length.
    {
        if(l >=0)
        {
            length = l;
        }
        else
        {
            length = 0;
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
            breadth = 0;
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
    int hello()
    {
        return length;
    }

    int area()
    {
        return (length*breadth);
    }
    int perimeter()
    {
        return (2 * (length + breadth));
    }
};

int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(10);
    std::cout<<r.area()<<" "<<r.perimeter()<<"\n";
    std::cout<<r.hello()<<" "<<r.getBreadth()<<" "<<r.getLength()<<"\n";

    return 0;
}