// Character array.

// Strings are collection of characters.
// Two ways of using string, is either by using array-char or class-string.

#include<iostream>

int main()
{
    char x = 'a'; // character.
    char s[4] = "Roy";
    char s[] = "Gourab Roy"; 

    char *a = "Hello"; // This method is mainly used for declaring any character in heap.

    // Reading and printing array char.
    char b[20];
    std::cout<<"Enter: ";
    std::cin>>b; // Here, only the first word will be taken as an input, after hitting the space bar, the second word will be considered as another string. 
    std::cin.get(b, 20); // When we use two 'cin.get' then the first 'cin.get' will take the whole sentence and the second 'cin.get' will take 'enter' as the second string. It we want to eneter two different names then it becomes impossible to take the two names. We can use 'cin.ignore()' after the first string for resolving the matter
    std::cin.getline(b, 20); // Best!!
    std::cout<<b;

    return 0;
}