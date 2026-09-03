// Namespaces.

// Namespaces are used for removing name conflict.
// If you have multiple functions and classes with the same name in a project, causing name conflicts, use namespaces to resolve the conflicts.

// If I want to use 'semicolon' after the ending of the block of the namespace, then I can use, it will cause no harm to my code.
// And if I don't want to use, then I can leave it, still it won't cause any type of error, it totally depends upon me whether I want to use it or not.

// We can have the 'namespace' in the header-file of our own and can use it in different program.
// 'Namespace' is used to structure a program into logical unit.



#include<iostream>

namespace first
{
    void fun()
    {
        std::cout<<"First function.\n";
    }
}

namespace second
{
    void fun()
    {
        std::cout<<"Second function.\n";
    }
}

// One way.
int main()
{
    first::fun();
    second::fun();

    return 0;
}

// Another way.
using namespace first;
int main()
{
    fun();
    second::fun();

    return 0;
}