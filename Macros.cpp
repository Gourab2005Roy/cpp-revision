// Macros or Pre-processors Directive.
// This are the instructions to the compiler.
// We can give some instructions to the compiler, so that before it starts compiling of a prgram, it can follow and perform those instructions.

// It replaces the macros and keeps it before the real compilation is done.

// ONE MOST IMPORTANT THING IS THAT, WE ARE NOT ALLOWED TO USE ';' AFTER WRITING THE MACROS.


#include<iostream>

#define pi 3.14159
#define c std::cout

int main()
{
    int x = 10;
    float value = (x*pi);

    c<<value<<" "<<x<<" "<<pi;

    return 0;
}