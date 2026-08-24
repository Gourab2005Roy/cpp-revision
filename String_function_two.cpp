// Here, we gonna see the other functions action on that STRING.

#include<iostream>
#include<string>

int main()
{
    std::string str = "Hello";

    // Appending another string in the main string.
    str.append("Bye");
    std::cout<<str<<" is the updated string.\n";
    str.append("Bye", 1);
    std::cout<<str<<" is the new updated string.\n";

    // Inserting in the string.
    str.insert(3, "KK"); // It means the given string will be inserted in the main string at / in the specified index.
    std::cout<<str<<" is the updated string with inserted string in it.\n";
    std::cout<<str.length()<<" is the length of the updated string.\n";

    // Replacing within the string.
    str.replace(3, 2, "KK"); // str.replace(index_number, total_number_of_replacing_character, string_that_is_in_use_of_replacing)
    std::cout<<str<<" is the new updated string.\n";

    // For erasing the string.
    str.erase(); // It erases the whole string.

    // For entering a character.
    str.push_back('h'); // It enters the character from the end of the string.
    std::cout<<str<<" is the new updated string.\n";

    // For taking out a character.
    str.pop_back(); // It will pop-out the last character present in the string, no matter what the character is.
    std::cout<<str<<" is the new updated string.\n";    

    // For swapping two strings.
    std::string str1 = "Bye";
    str.swap(str1); // Here, the swapping between two strings is being performed.
    std::cout<<str<<" and "<<str1<<" are the new swapped string.\n";

    return 0;
}