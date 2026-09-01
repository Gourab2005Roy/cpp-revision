// All about throw.

// Throw can be of int, double, float, character, string and object of a class.
// It seems to be more valuable, if we write the throw again with the function name, for the betterment of understanding.
// Within the throw, we need to write the data=type, that we are going to use in it.
// If it is a class, then simply write the name of the class.
// If we keep the outer throw(), empty, then it indicates that there is nothing to throw inside the function.


#include<iostream>

int division(int a, int b) throw(int)  // Here, the written 'throw' is more powerful than it seems to be.
// If under the 'throw', there is nothing, then it won't print out and will show/denote that there is an absence of throw in the block.
// If there is a data-type matching, with the data-type written in the inner throw, then normal.
// If the type of data-type doesn't match, still it won't print-out anything.
{
    if(b == 0)
    {
        throw 1;
    }
    return (a/b);
}

int main()
{
    int a;
    std::cout<<"Enter the value of the numerator: ";
    std::cin>>a;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input.\n";
        return -1;
    }

    int b;
    std::cout<<"Enter the value of the denomenator: ";
    std::cin>>b;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input.\n";
        return -2;
    }

    int c;

    try
    {
        c = division(a, b);
        std::cout<<c<<" is the value of the division.\n";
    }
    catch(const int e)
    {
        std::cerr<<"Division by zero.\n";
    }
    
    return 0;
}



// Now, checking out the things that can be done using 'throw'.
#include<iostream>
#include<string>

int division(int a, int b)
{
    if(b == 0)
    {
        throw 'a'; // Throwing character.
        throw std::string("Error!!"); // Throwing string.
    }

    return (a/b);
}

int main()
{
    int a;
    std::cout<<"Enter the value of the numerator: ";
    std::cin>>a;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input\n";
        return -1;
    }

    int b;
    std::cout<<"Enter the value of the denomenator: ";
    std::cin>>b;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input.\n";
        return -2;
    }

    int c;

    try
    {
        c = division(a, b);
        std::cout<<c<<" is the value of the division.\n";
    }
    catch(const char ch)
    {
        std::cerr<<ch<<"\n";
    }
    catch(const std::string str)
    {
        std::cerr<<str<<"\n";
    }

    return 0;
}



// Now throwing class.
#include<iostream>
#include<string>

class InvalidAgeException
{
    private:
    std::string message;
    int InvalidAge;

    public:
    InvalidAgeException(std::string str, int age);

    std::string getMessage()
    {
        return message;
    }
    int getInvalidAge()
    {
        return InvalidAge;
    }
    ~InvalidAgeException(){};
};
InvalidAgeException::InvalidAgeException(std::string str, int age)
{
    message = str;
    InvalidAge = age;
}

void Age(int age)
{
    if(age<0 || age>150)
    {
        throw InvalidAgeException("Age is out of realistic range.", age); // an object is being CONSTRUCTED right here (a temporary), and immediately thrown.
    }
    std::cout<<"Your age is: "<<age<<"\n";
}

int main()
{
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    if(std::cin.fail())
    {
        std::cerr<<"Invalid input.\n";
        return -1;
    }

    try
    {
        Age(age);
    }
    catch(InvalidAgeException &e)  // catch BY REFERENCE — avoids an unnecessary copy.
    {
        std::cerr<< "Caught exception: " <<e.getMessage()<< " (value was: " <<e.getInvalidAge() << ")\n";
    }
    
    return 0;
}