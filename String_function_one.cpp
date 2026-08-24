// Here, we will see the working of functions over 'STRING' itself.

#include<iostream>
#include<string>

int main()
{
    std::string str = "Gourab Roy";

    // Finding the length of the string.
    std::cout<<str.length()<<" is the length of the string.\n";
    std::cout<<str.size()<<" this too does the same job as that of 'length'.\n";

    // It helps us to identify or find the total capacity of the string.
    std::cout<<str.capacity()<<" is the capacity of the string.\n";

    // For changing the capacity of the string.
    str.resize(30); // Here, '30' is the changed capacity we want in our string.
    std::cout<<str.capacity()<<" is the updated capacity of the string.\n";

    // For finding out the max-capacity of the string, we use 'max_size()'. The value of this might vary from compiler to compiler.
    std::cout<<str.max_size()<<" is the maximum capacity of the string.\n";

    // For clearing out the string.
    str.clear();

    // For finding out whether the string is empty or not?
    str.empty();

    return 0;
}