// Here, we gonna see the extra functions that we can apply over strings.

#include<iostream>
#include<string>

int main()
{
    std::string str = "Roy";
    
    // printing only the front character of the string.
    std::cout<<str.front()<<"\n";

    // printing only the last character of the string.
    std::cout<<str.back()<<"\n";

    // Adding two strings together.
    std::string s1 = "Hello";
    std::string s2 = "World";
    std::string s3 = s1 + s2;
    std::cout<<s3<<"\n";

    // Copying one string into the other.
    std::string str1 = "Hello";
    std::string str2 = "hello";
    str2 = str1;
    std::cout<<str2<<"\n";

    return 0;
}