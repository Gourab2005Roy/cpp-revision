// Inheritance.

// INHERITANCE means making something from the existing thing.
// Here, we can modify a class and make it more advanced.
// After the modification of the class, we can still access the function of the previous class and make it in use.

// We can access that part of the previous class, from which there is 'public', means publicly opened for each and everyone.
// We use ':' for accessing the another class, from which we are going to inherite.
// And in side, we write 'public', this shows, we are going to inherite each and everything from the 'public' part of that 'class'.


// One most important thing about 'INHERITANCE' is, we are inheriting from another class and can store that inherited thing in the derive class in the form of 'private', 'protected' and 'public'.
// Now, it depends upon the programmer, that on/in what form he wants to store the inherited thing.


#include<iostream>
#include<string>

class Animal
{
    private:
    int age;

    protected:
    std::string name;

    public:
    Animal (int a, std::string n)
    {
        age = a;
        name = n;
    }

    int getAge()
    {
        return age;
    }
};

// Inheriting class. The class that is inheriting from the previous class.
class Dog : public Animal
{
    public:
    Dog(int a, std::string name_1) : Animal(a, name_1){}

    void display()
    {
        std::cout<<name<<"\n";
        std::cout<<getAge()<<"\n";
    }
};

int main()
{
    Dog d(5, "Buddy");
    d.display();
    
    return 0;
}