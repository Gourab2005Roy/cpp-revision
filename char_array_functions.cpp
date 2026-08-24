// Here, we gonna see what sort of functions we can pull on the character array.

// Here, the second one does everything on the first.

#include<iostream>
#include<cstring>

int main()
{
    char s[] = "Hello";

    // Finding the length of 's'.
    std::cout<<strlen(s)<<" is the length of the character array.\n";

    // For concatenating. strcat(source, destination) and strncat(source, destination, length) for length we use 'n'.
    char source[] = "Hello";
    char destination[] = "World";
    strcat(source, destination);
    std::cout<<source<<"\n";
    strncat(source, destination, 2);
    std::cout<<source<<"\n";

    // Copying of string.
    // Means, copying one string into the other, strcpy(destination, source), in simple word, the second string gets copied in the first string written in the form of function.
    char source[] = "Roy";
    char destination[] = "";
    strcpy(destination, source);
    std::cout<<destination<<" is the current value of destination.\n";

    // Finding out whether the sub-string is presence in main string or not.
    //Once, it finds out that the sub-string is present in main sring then, it will print out the part from the substring to the last of the main string.
    // strstr(main, sub)
    char main[] = "programming";
    char sub_string[] = "gram";
    std::cout<<strstr(main, sub_string);

    // Finding out the appearance of a character in a string.
    // Similar to 'strstr', but it is for character 'strchr'
    // There are two different methods to check, strchr(main, 'character') and strrchr(main, 'character').
    // 'strchr(main, 'character') -> checks from the beginning.
    // 'strrchr(main, 'character') -> checks from the ending.
    // Once, it finds the character in the main-string, then it will print the rest of the string.
    char main[] = "programming";
    std::cout<<strchr(main, 'r')<<" "<<strrchr(main, 'r');

    // Comparing between two strings.
    // Here, the comparison between string happens in the dictionarical / alphabetical order.
    // The main concept behind the comparison of the string in based on "ASCII" value.
    // Between the two string, if both of them are equal then, it will return '0'.
    // If the first string is bigger, then it will return '+ve'.
    // If the second string is bigger, then it will return '-ve'.
    char str1[] = "Hello";
    char str2[] = "hello";
    std::cout<<strcmp(str1, str2)<<" "; // Resulting into '-ve'.
    std::cout<<strcmp(str2, str1)<<" "; // Resulting into '+ve'.
    std::cout<<strcmp(str1, str1); // Resulting into '0'.



    return 0;
}