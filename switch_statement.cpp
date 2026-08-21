// Switch statement.
// This is also a kind of conditional statement.
// It is mainly used for user.

// It's bit different from that of 'if-else' statement.
// It generally don't check each and every condition, it generally points to the specific or the particular condition and prints out.
// If that condition ain't there, then it prints the default statement.

#include<iostream>

int main()
{
    int x;
    std::cout<<"Enter a number starting from 1 and ending at 3: ";
    std::cin>>x;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input.";
        return -1;
    }

    switch(x)
    {
        case 1:{std::cout<<"The entered number is '1'.\n"; break;}
        case 2:{std::cout<<"The entered number is '2'.\n"; break;}
        case 3:{std::cout<<"The entered number is '3'.\n"; break;}
        default: std::cout<<"Sorry!!";
    }

    return 0;
}