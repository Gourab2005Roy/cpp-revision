// Here, we gonna learn the operators on string-class.

#include<iostream>
#include<string>

int main()
{
    std::string str = "Gurleen Kaur Arora";

    // Iterator: It means travelling or traversing through an array.
    std::string::iterator it;
    for(it = str.begin(); it != str.end(); it++)
    {
        std::cout<< *it;  // Here, we are using '*', because 'it' is derefencing, means it is acting like a pointer, for accessing the element's of the array.
    }
    std::cout<<"\n";

    // Reverse Iterator: It means travelling or traversing through an array from the backside.
    std::string::reverse_iterator iit;
    for(iit = str.rbegin(); iit != str.rend(); iit++)
    {
        std::cout<<*iit;
    }
    std::cout<<"\n";

    return 0;
}