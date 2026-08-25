// Default Argument.

// // The main role of default-arguement is to, combine the possible overloaded-function.
// And denoting some default values is known as default arguements.
// If we want to assign / denote default-arguement, then we should start denoting it from last, without skipping anyone of them.


// Example:- add(2, 4)
//           add(2, 4, 5)
//           add(2, 4, 0)
//        Here, the value of third and the first one is same, but the function required are different. So, to remove this type of problem we use 'DEFAULT-ARGUEMENT'.

#include<iostream>

int addition(int x = 0, int y = 0, int z = 0)
{
    return (x + y + z);
}

int main()
{
    std::cout<<addition(10, 20)<<"\n";
    std::cout<<addition(10, 20, 0)<<"\n";
    std::cout<<addition(10, 20, 9)<<"\n";
    return 0;
}