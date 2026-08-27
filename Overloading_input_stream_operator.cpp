// Overloading input stream operator.

// We generally std::cout and std::cin for displaying and receiving the values.
// But, we can't use them in the case of an object.
// We simply can't take the object's value using '>>'.
// So, for taking the object's value, using '>>', we are using an operator of '>>', that gonna take the inner-value of the object.


#include<iostream>

class Addition
{
    private:
    int a;
    int b;

    public:
    Addition(int a = 0, int b = 0);

    friend std::istream & operator>>(std::istream &in, Addition &add1);
    friend std::ostream & operator<<(std::ostream &out, Addition &add1);

    ~Addition();
};

Addition::Addition(int a, int b)
{
    this->a = a;
    this->b = b;
}
std::ostream & operator<<(std::ostream &out, Addition &add1)
{
    out<<add1.a<<" "<<add1.b<<"\n";
    return out;
}
std::istream & operator>>(std::istream &in, Addition &add1)
{
    std::cout<<"Enter the first number: ";
    in>>add1.a;
    std::cout<<"Enter the second number: ";
    in>>add1.b;
    return in;
}
Addition::~Addition()
{
    std::cerr<<"Destroyed.\n";
}


int main()
{
    Addition a1;
    std::cin>>a1;
    std::cout<<a1;

    Addition a2;
    std::cin>>a2;
    std::cout<<a2;


    return 0;
}