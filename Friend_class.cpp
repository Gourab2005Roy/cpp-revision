// FRIEND CLASS
//
// DEFINITION: A friend class is a class that has been given special permission to access another class's PRIVATE and PROTECTED members.

// Normally, private/protected members can only be touched by the class's own member functions. 'friend class X;' breaks that rule for one specific class, X — granting EVERY member function of X full access to the private/protected members of the class that declared the friendship.

// This is the same underlying idea as 'friend function' (which grants access to ONE function), just widened to grant access to an ENTIRE class's worth of member functions at once.

#include<iostream>

class Engine
{
    private:
    int horsepower;   // private — normally NOTHING outside Engine can touch this directly

    public:
    Engine(int hp)
    {
        horsepower = hp;
    }

    // This line is the actual friendship declaration.
    // It says: "the class 'Car' (defined below) is allowed to access MY private members, even though Car is not a member of Engine itself."
    friend class Car;
};

class Car
{
    private:
    std::string model;

    public:
    Car(std::string m)
    {
        model = m;
    }

    // This function belongs to Car, NOT to Engine.
    // Normally, it would have NO right to touch 'horsepower', since that's private inside Engine. But because Engine declared 'friend class Car;', every member function of Car — including this one — is allowed in.
    void showSpecs(const Engine &e) // const — guarantees showSpecs can't accidentally modify the original Engine. Without 'const', we can modify.
    {
        std::cout << model << " has " << e.horsepower << " HP.\n";
        // 'e.horsepower' — direct access to a PRIVATE member of a DIFFERENT class, made legal purely because of the friend declaration above.
    }
};

int main()
{
    Engine e(450);       // an Engine object, horsepower is private to it
    Car c("Mercedes");    // a Car object, unrelated class

    c.showSpecs(e);        // Car reaches into Engine's private data, via friendship.

    return 0;
}