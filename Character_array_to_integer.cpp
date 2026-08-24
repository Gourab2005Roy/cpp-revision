// Here, we are going to convert a character_array into 'long-int' and 'float'.
// Ultimately, converting a character_array into integer.

// For doing the conversion, we use two things, known as 'strtol' and 'strtof'.
// The meaning of 'strtol' means converting the character_array to long integer.
// The meaning of 'strtof' means converting the character_array to float.

// As a result, we are able to perform arithmetic operation's.


// For doing 'strtol', we need to write the base number, because, by writing the base number, we are making sure / confirm, in which number system, we really want to convert the character_array.
// But, we don't need to write the base number in the case of 'strtof', as it is already mentioned that, we are converting the given character_array into floating number.
// And floating number is there only in decimal.

// NULL is used as the second argument to indicate that you do not need to keep track of the end pointer.
// The first character_array defines the character_array that needs to be converted and 'NULL' defines that the end pointer need not to be kept tracked and the base of the number defines that of the number system.


#include<iostream>
#include<cstdlib>

int main()
{
    char s1[10] = "237";
    char s2[10] = "54.87";
    char s3[10] = "2706";

    // By doing the conversion, we are making sure that the string's gets transformed into operation-number system format.
    long long int x = strtol(s1, NULL, 10);
    float y = strtof(s2, NULL);
    int z = std::stoi(s3); // This is using 'std::' before it, cause it is of native C++, while the others are not using any such, cause they are of native C.

    std::cout<<x<<" "<<y<<"\n";

    x++;
    y++;

    std::cout<<x<<" "<<y<<"\n";
    std::cout<<(x+y)<<"\n";
    std::cout<<z;

    return 0;
}