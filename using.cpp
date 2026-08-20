// Here, we gonna learn and understand the concept of 'Using'.
// 'Using' is as same as that of 'typedef', but it is more advance and fills the void where, 'typedef' fails to..

// Way of reading: left to right (in normal way)
// using using_name = data-type

// One super advantage of 'using' over 'typedef', it can create aliases for templates..
/*
1. Basic alias (both work the same way here):
typedef unsigned long ulong_t;   // old style
using ulong_t = unsigned long;   // new style — reads left-to-right, same as normal variable declarations

2. Function pointer alias — using is much easier to read:
typedef void (*FuncPtr)(int, int);   // typedef: syntax is backwards and confusing
using FuncPtr = void(*)(int, int);   // using: reads naturally, "FuncPtr is a pointer to a function..."

3. Where typedef simply can't compete — template aliases:
Say you're tired of writing std::vector<std::pair<int, int>> everywhere.
template<typename T>
using Vec = std::vector<T>;

Vec<int> nums = {1, 2, 3};   // same as std::vector<int>

Try to do this with typedef and it breaks — typedef cannot be templated:
template<typename T>
typedef std::vector<T> Vec;   // ERROR — does not compile
*/

#include<iostream>

using age = int;

int main()
{
    age my_age = 21;

    std::cout<<my_age<<" is my age.";

    return 0;
}