// Function - overloading.


// We can write more than one funtion using same name, but different argument list.
// Return-type is never considered in this.
// Over-loading is the ability to define multiple functions with th esame name, but with different argument/parameter list.
// Benefit is that, we need not to think each and every-time what name should be given if the operator's are same.
// If the function-name and the parameter-list / arguement are exactly same, but the return-type is different, then it is known as 'NAME-CONFLICT'.
// If anyone of the argument / parameter-list is different, then we can call it under / as function-overloading.



#include<iostream>

int add(int x, int y)
{
    return (x + y);
}
int add(int x, int y, int z)
{
    return (x + y + z);
}
float add(float x, float y)
{
    return (x + y);
}
float add(float x, int y)
{
    return (x + y);
}

int main()
{
    int a = 10;
    int b = 10;
    float c = 10.2;
    float d = 3.2;
    float e = 4;
    
    std::cout<<add(a, b)<<"\n";
    std::cout<<add(a, b, e)<<"\n";
    std::cout<<add(c, d)<<"\n";
    std::cout<<add(d, e)<<"\n";


    return 0;
}