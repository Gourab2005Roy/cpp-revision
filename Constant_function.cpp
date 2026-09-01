// Constant function.

#include<iostream>

int add(const int x, int y)  // Here, we are making the 'x' constant by writting 'const' infront of it.
{
    // x++;  // Due to constant, the variable 'x' can't be modified.
    y++;
    return (x + y);
}

int main()
{
    int a = 10;
    int b = 10;

    std::cout<<add(a, b);

    return 0;
}