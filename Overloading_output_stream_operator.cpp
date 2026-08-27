// Overloading output stream operator.

// We generally std::cout and std::cin for displaying and receiving the values.
// But, we can't use them in the case of an object.
// We simply can't display the object's value using '<<'.
// So, for displaying the object's value, using '<<', we are using an operator of '<<', that gonna display the inner-value of the object.

#include<iostream>

class Addition
{
    private:
    int a;
    int b;

    public:
    Addition(int a = 0, int b = 0);

    friend Addition operator+(Addition a1, Addition a2);
    friend std::ostream & operator<<(std::ostream &out, Addition &add1); // This is used for printing the object using '<<'.

    ~Addition();
};

Addition::Addition(int a, int b)
{
    this->a = a;
    this->b = b;
}
Addition operator+(Addition a1, Addition a2)
{
    Addition temp;
    temp.a = a1.a + a2.a;
    temp.b = a1.b + a2.b;
    return temp;
}
std::ostream & operator<<(std::ostream &out, Addition &add1)
{
    out<<add1.a<<" "<<add1.b<<"\n";
}
Addition::~Addition()
{
    std::cerr<<"Destroyed.\n";
}

int main()
{
    Addition first(10, 10);
    Addition second(10, 10);
    Addition third;

    third = first + second;

    std::cout<<first;
    std::cout<<second;
    std::cout<<third;

    return 0;
}