// Scope-resolution operator is used to write the body of the function outside of the class.
// Suppose, if we want to write the body of the function outside of the class, then we should write the heading(s) of the function within the class and the body outside of the class block.
// It is recommended to write the main body of each and every function ouside of the class.

// If we write a function outside the class, then the machine code will seperately generate that function outside of the main function.
// When there is a call, it will go to the function and after that, it will return to that function.
// If we write the function inside the class itself, then the machine code fo that funiton will be replaced, at the place of function call, wherever the funciton at that place only.
// IF we write a function inside the cass, then itself beccomes the part of the machine code.
// It is a good practice to write the cuntion body outside, using scope resolution. If written inside then it will become an "INLINE" function.
// "INLINE" function should not have any complex logic. If there are loops, nested loop and etc..., then it is mandatory to write them outside the class, but not inside.


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
};

int Rectangle :: area()
{
    return (length * breadth);
}
int Rectangle :: perimeter()
{
    return (2 * (length + breadth));
}


int main()
{
    Rectangle r(10, 10);
    std::cout<<r.area()<<" "<<r.perimeter()<<"\n";

    return 0;
}