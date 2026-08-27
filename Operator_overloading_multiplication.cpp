// Operator-overloading-multiplication.

// Operators overloading allows us to re-define how operators (+, -, *, etc...) work with custom classes.
// This means we can make objects of your class behave like basic types when using these operators.

// Operator overloading lets you define what happens when you use an operator with objects of your class. 
// For example, you can make the '*' operator perform a specific action when used between two objects of your class.



// This operator overloading is done w.r.t "*"



#include<iostream>

class Mul
{
    private:
    int a;
    int b;

    public:
    Mul(int a = 1, int b = 1)
    {
        this->a = a;
        this->b = b;
    }

    int getA();
    int getB();

    Mul multiplication(Mul m)
    {
        Mul temp;
        temp.a = a * m.a;
        temp.b = b * m.b;
        return temp;
    }
    Mul operator* (Mul m)
    {
        Mul temp;
        temp.a = a * m.a;
        temp.b = b * m.b;
        return temp;
    }
    ~Mul();
};

int Mul::getA()
{
    return a;
}
int Mul::getB()
{
    return b;
}
Mul::~Mul()
{
    std::cerr<<"Everything got destroyed by the de-constructor.\n";
}

int main()
{
    Mul m1(10, 10);
    Mul m2(10, 10);
    Mul m3;
    Mul m4;

    m3 = m1.multiplication(m2);
    m4 = m1 * m2;
    std::cout<<m3.getA()<<" "<<m3.getB()<<"\n";
    std::cout<<m4.getA()<<" "<<m4.getB()<<"\n";

    return 0;
}