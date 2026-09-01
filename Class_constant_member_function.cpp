// Constant class member function.

#include<iostream>

class Base
{
    private:
    int a;
    int b;

    public:
    Base(int a = 0, int b = 0);

    void change_and_display() const;

    ~Base(){};
};

Base::Base(int a, int b)
{
    this->a = a;
    this->b = b;
}
void Base::change_and_display() const
{
    // x++; // I can't perform any modification over the member, as the function is constant.
    std::cout<<a<<" "<<b<<"\n";
}


int main()
{
    Base b(10, 1);
    b.change_and_display();

    return 0;
}