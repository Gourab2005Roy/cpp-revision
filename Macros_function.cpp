// Macro Function or Pre-processors Directives Functions.

// It is a type of function used with the help of 'MACROS'.
// In simple word, we are defining a function by ourself.

// ONE MOST IMPORTANT THING IS THAT WE CANNOT USE ';' AFTER WRITING 'MACROS' OR 'MACROS FUNCTION'.

// We cannot use 'default arguement' in a macros function.
// Because 'default arguement' can only be used in the the parameter list/parameter arguement, and in a macros function there is no parameter list/arguement.

// The main reason behind not using 'default arguement' is: - 
//Macros are Textual Replacement: Macros are simply text replacement mechanisms handled by the preprocessor.
// They are expanded before the actual compilation process begins.
// The preprocessor doesn't have the capability to understand or implement the concept of default arguments, which is a feature of the C++ language itself.



#include<iostream>

#define add(x, y) (x + y)
#define sqr_fun(x) ((x) * (x))

#define c std::cout

int main()
{
    int x = 10;
    int y = 20;

    c<<add(x, y)<<"\n";
    c<<sqr_fun(x)<<"\n";

    return 0;
}