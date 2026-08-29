// Base Class Pointer Deried Class Object.

// The concept of this is very simple, we need to understand the thing clearfully.
// It means that, we are inheriting something from our parent class and we know vey well how to use the parent class.
// Now, the inherited / derived class may be much more advanced and we cannot access / do some operation in the advanced class with the idea of basic class.
// This whole concept lies around 'pointer', normally we can access, but if we use pointer, then we can access only in the class, in which we have defined our pointer.
// Another most important thing is that, if we declared a pointer in derived class, then we cannot point, the pointer towards the object of base class.


// More clearly..

// We know how to drive a normal car an dwe have the knowledge of driving that type of normal car, now if someone gives us an advanced car to drive, though we have no knowledge about it, but still wew can drive, with the knowledge of basic car.
// Similarly, we are a pointer of basic car and now we created an object of advanced car (means, we are in an advanced car) then, we can only operate those functions of that advanced car, that are in relate with basic car and won't be able to access those features of that advanced car.
// Now, the vice-versa concept is not possible, that we know how to drive an advanced car and if we go to drive a basic normal car, then we won't be able to drive it.



#include<iostream>

class Basic_car
{
    public:
    void start()
    {
        std::cout<<"Car started.\n";
    }
    void stop()
    {
        std::cout<<"Car stopped.\n";
    }
};

class Advanced_car : public Basic_car
{
    public:
    void sunroof()
    {
        std::cout<<"Sunroof opened.\n";
    }
};


int main()
{
    Basic_car *c;
    c = new Advanced_car();

    c->start(); // Accessible.
    c->stop(); // Accessible.

    // c->sunroof() // non-accessible.

    delete c;
    c = nullptr;

    return 0;
}