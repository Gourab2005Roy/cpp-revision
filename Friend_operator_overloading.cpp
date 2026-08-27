// Operator-overloading done with the help of 'friend'.
// Each and everything is same, but the writting of the body function is done outside of the 'class-block', without the help of 'scope-resolution'.

// The concept in it is that, a friend will do the operation between the two things and store it in another thing.


#include<iostream>

class Complex
{
    private:
    int real;
    int img;

    public:
    Complex(int r = 0, int i = 0);

    int getReal();
    int getImg();

    friend Complex operator+(const Complex c1, const Complex c2);

    ~Complex();
};

Complex::Complex(int r, int i)
{
    real = r;
    img = i;
}
Complex operator+(const Complex c1, const Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
int Complex::getReal()
{
    return real;
}
int Complex::getImg()
{
    return img;
}
Complex :: ~ Complex()
{
    std::cerr<<"Destroyed.\n";
}

int main()
{
    Complex c1(10, 10);
    Complex c2(10, 10);
    Complex c3;
    
    c3 = c1 + c2;
    std::cout<<c3.getReal()<<" "<<c3.getImg()<<"\n";

    return 0;
}