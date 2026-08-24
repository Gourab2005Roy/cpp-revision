// Here, we gonna learn about STRING.


// BETTER USE 'getline(cin, string_variable)'.

#include<iostream>
#include<string> // Required for dealing with 'STRINGS'.
#include<limits> // Needed for numeric_limits.

int main()
{
    std::string a;
    std::cout<<"Enter something in the string: ";
    std::cin>>a; // It only prints that thing, which is being written before entering space. The rest of the things will be ignored accordingly.
    std::cout<<a<<"\n";

    // The reason for using the below line is, the leftover part of 'cin' is being 'picked' by 'getline(cin, string).
    // As a result, the entry of the second string was impossible.
    // So, thought 'cin.ignore()' will get the work done. But, it was only ignoring the space bar of the leftover part and the rest of the part was not being ignored.
    // So, it becomes a total headache to remove each and every word using 'cin.ignore()'. So better we used, the numeric limit concept in it.
    // The numeric limit concept just makes sure that the max to max part of the rest over thing is being ignored.

    // std::streamsize is an implementation-defined signed integer type used by the C++ Standard Library to represent the sizes of I/O buffers and the number of characters transferred during input/output operations.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Flush the ENTIRE rest of the line from the buffer.

    std::string b;
    std::cout<<"Enter another thing: ";
    getline(std::cin, b);
    std::cout<<b;

    return 0;
}