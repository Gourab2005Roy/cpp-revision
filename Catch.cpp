// All about catch.

// We can have multiple 'catch' blocks, depending on the number of throw.
// Writing multiple 'catch' blocks is/are better than having 'catch-all' block.

// In 'catch-all' block, we mainly catch all the throw using that, and we don't specify something special for different throw.
// Using 'catch-all' means not giving any clear message to the user.

// If 'Catch-all' block is to initialized, then it should be initialized in the last.

// In case of an object of class, catch block must catch the derived class in prior to the base class.


#include<iostream>
#include<string>

int main()
{
    try
    {
        // Only the first throw works, whereas the rest of the throw remains unbothered.
        // Means, if we write 10 throws, then all the throws work, but the throw of the first will be in action, the rest will be remained unbothered/untouched.
        throw 1; // Throwing an integer.
        throw 1.1; // Throwing a float.
        throw 'a'; // Throwing a character.
        throw std::string ("error!!"); // Throwing string.
    }
    catch(const int e)
    {
        std::cerr<<"Integer catch.\n";
    }
    catch(const double e)
    {
        std::cerr<<"Double catch.\n";
    }
    catch(const char e)
    {
        std::cerr<<"character catch.\n";
    }
    catch(const std::string e)
    {
        std::cerr<<"String catch.\n";
    }

    catch(...)  //  It catches everything.
    {
        std::cerr<<"Catches everything, regardless of the data-type.\n";
    }
    
    return 0;
}


// Seeing how catch works on class.
#include<iostream>
#include<string>

class BaseException
{
    public:
    virtual std::string msg()
    {
        return "base error";
    }
};

class SpecificException : public BaseException
{
    public:
    std::string msg() override
    {
        return "specific error";
    }
};

int main()
{
    try
    {
        throw SpecificException();   // a SpecificException object is thrown
    }
    catch(BaseException &e)          // catches SpecificException too, since it IS a BaseException
    {
        std::cout << e.msg() << "\n";   // virtual dispatch: prints "specific error", not "base error"
    }

    return 0;
}