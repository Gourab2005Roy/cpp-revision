// Finding the least common multiple.

// Shortcut method:
// LCM(a, b) = ((a) / GCD(a, b)) * b


#include<iostream>

int GCD(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b)
{
    return ((a) / GCD(a, b)) * b;
}

int main()
{
    int x = 12;
    int y = 30;
    std::cout<<GCD(x, y)<<" is the value of GCD and "<<LCM(x, y)<<" is the value of LCM."<<std::endl;

    return 0;
}
