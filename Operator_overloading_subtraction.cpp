// Operator-overloading-subtraction.

// Operators overloading allows us to re-define how operators (+, -, *, etc...) work with custom classes.
// This means we can make objects of your class behave like basic types when using these operators.

// Operator overloading lets you define what happens when you use an operator with objects of your class. 
// For example, you can make the '-' operator perform a specific action when used between two objects of your class.



// This operator overloading is done w.r.t "-"


#include<iostream>

class Complex
{
    private:
    int real;
    int img;

    public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    int getReal();
    int getImg();

    Complex subtraction(Complex c) // Here, 'c' is taking the input of the second object.
    {
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
    Complex operator-(Complex c) // This is used for the case of getting rid of 'object.add(object)' and for any such difficulties. By using this, we can perform simple subtraction.
    {
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
    ~ Complex();
};

int Complex::getReal()
{
    return real;
}
int Complex::getImg()
{
    return img;
}
Complex::~Complex()
{
    std::cerr<<"Destroyed by the destructor.\n";
}


int main()
{
    Complex c1(120, 20);
    Complex c2(20, 8);
    Complex c3;
    Complex c4;

    c3 = c1.subtraction(c2); // Performing subtraction between 'c1' and 'c2'.
    c4 = c1 - c2; // The easiest way to perform.

    std::cout<<c3.getReal()<<" "<<c3.getImg()<<"\n";
    std::cout<<c4.getReal()<<" "<<c4.getImg()<<"\n";

    return 0;
}


/*
Output:

Destroyed by the destructor.   <- parameter 'c' (copy of c2) destroyed, end of add()
Destroyed by the destructor.   <- 'temp' destroyed, end of add()
Destroyed by the destructor.   <- parameter 'c' (copy of c2) destroyed, end of operator+()
Destroyed by the destructor.   <- 'temp' destroyed, end of operator+()
100 12                                        <- cout line runs
100 12                                        <- cout line runs
Destroyed by the destructor.   <- c4 destroyed, end of main (LIFO: last declared...)
Destroyed by the destructor.   <- c3 destroyed
Destroyed by the destructor.   <- c2 destroyed
Destroyed by the destructor.   <- c1 destroyed (first declared, destroyed last)
*/