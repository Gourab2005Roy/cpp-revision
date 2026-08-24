// Here, we gonna see the functions of one string over the other.


#include<iostream>
#include<string>

int main()
{
    std::string str = "How are you";

    // Copying a string into an array character.
    char s[20];
    str.copy(s, str.length()); // In this, the string with the whole length got copied
    
    // Finding the occurance of a string/character in the string.
    std::cout<<str.find("are")<<"\n"; // If its found, then it will print only the index number from which the matching started.
    std::cout<<str.find('o')<<"\n"; // If its found, then it will print only the specific index, with which the character matches.

    // Finding the occurence of a string/character in the string from the right side.
    std::cout<<str.rfind("are")<<"\n"; // If its found, then it will print only the index number form which the matching started from the right-side of the string.
    std::cout<<str.rfind('o')<<"\n"; // If its found, then it will print only the specific index, with which the character matches from the right-side of the string.

    // Finding the character from the last of the string.
    std::cout<<str.find_last_of('o')<<"\n"; // This is printing the index number of that character with which the character is getting matched from the backside of the string.
    std::cout<<str.find_last_of('o', 7)<<"\n"; // Here, we are finding the occurance of the character 'o' from the last of the string, but from the index number 7.
    std::cout<<str.find_last_of("ae")<<"\n"; // Here, we are finding the character not together, but individualy, means printing the index of that character that comes / arrives first among them in the main string while travelling from backwards.

    // Finding the character from the frist of the string.
    std::cout<<str.find_first_of('o')<<"\n"; // This is printing the index number of that character with which the character is getting matched from the frontside of the string.
    std::cout<<str.find_first_of('o', 7)<<"\n"; // Here, we are finding the occurance of the character 'o' from the last of the string, but from the index number 7.
    std::cout<<str.find_first_of("ae")<<"\n"; // Here, we arefinding the character not together, but individually, means printing the index of that character that comes / arrives first among them in the main stirng while travelling from front.

    // Finding the character that doesn't matches the given character.
    std::string new_str = "gggdggg";
    std::cout<<str.find_first_not_of('g')<<"\n"; // Here, in 'new_str' from first and moving in forwards, to check whether there is any character present in 'new_str' that doesn't match the given character 'g'.
    std::cout<<str.find_last_not_of('g')<<"\n";  // Here, in 'str' from last and moving in backwards, to check whether there is any character present in 'str' that doesn't match the given character 'g'.

    // Extracting a sub-string from the main string.
    std::cout<<str.substr(3)<<"\n"; // Here, it denotes that a sub-string will be extracted from the main string and '3' specifies from which index it should start making the sub-string.
    std::cout<<str.substr(3, 4)<<"\n"; // Here, it denotes that a sub-string will be extracted from the main string and '3' specifies from which index it should start making the sub-string and '4' denotes the total length of the sub-string.

    // Comparing two strings.
    std::string new_str_1 = "HelLo";
    std::string new_str_2 = "HellO";
    std::cout<<new_str_1.compare(new_str_2); // The result will depend on the placement of the character according to ASCII.


    return 0;
}