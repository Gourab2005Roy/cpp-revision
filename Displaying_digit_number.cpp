// Displaying digit of a number..

// Here, we will see how to display the digit of a number..



#include<iostream>

void printForward(int n)
{
    if(n == 0) return;
    printForward(n/10);      // handle everything before the last digit FIRST
    std::cout << n%10;       // then print the last digit
}

int main()
{
    int x;
    std::cout<<"Enter a number: ";
    if(std::cin.fail() || !(std::cin>>x))
    {
        std::cout<<"Invalid!!";
        return -1;
    }
    int y = x;

    // Backwards.
    while(x != 0)
    {
        int remainder = x%10;
        std::cout<<remainder;
        x/=10;
    }

    std::cout<<"\n";

    // Frontwards.
    printForward(y);

    return 0;
}