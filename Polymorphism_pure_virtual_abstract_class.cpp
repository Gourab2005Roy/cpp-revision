// Polymorphism, PURE VIRTUAL FUNCTION.

// We don't create an object of the base class 'Car' directly — Car exists only to define an INTERFACE that derived classes must fulfill.
// Since no object of Car itself will ever be made, there's no need to write a real function body for start()/stop() inside Car — there's nothing for that body to do.

// A 'PURE VIRTUAL FUNCTION' is exactly this: a virtual function with NO body, declared in the base class, that FORCES every derived class to provide its own implementation before it can be instantiated.

// We want any class that inherits from Car (like Defender, Mercedes) to be REQUIRED to override start() and stop() — not just optionally allowed to.

// Syntax: to declare a pure virtual function, assign it '= 0':
//   virtual void start() = 0;

// PURPOSE of a pure virtual function:
// It forces every derived class to override that function. If a derived class does NOT override it, that derived class remains ABSTRACT too.

// A class containing even one pure virtual function (whether declared directly, or inherited without being overridden) is called an ABSTRACT class.
// You CANNOT create an object of an abstract class — the compiler blocks it, because the class is incomplete: it's missing a real implementation for at least one function it claims to have.

// If a derived class inherits from an abstract class but does NOT override every pure virtual function, that derived class remains abstract as well — and it too cannot be instantiated, until every pure virtual function is overridden.

// It is mandatory to add 'override' beside the function, that we are accessing from the virtual.



#include<iostream>

class Car
{
    public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual ~Car() {}   // virtual destructor — ensures correct cleanup through base-class pointers
};

class Defender : public Car
{
    public:
    void start() override
    {
        std::cout<<"Defender car started.\n";
    }
    void stop() override
    {
        std::cout<<"Defender car stopped.\n";
    }
    ~Defender() override
    {
        std::cout<<"Defender car destroyed.\n";
    }
};

class Mercedes : public Car
{
    public:
    void start() override
    {
        std::cout<<"Mercedes car started.\n";
    }
    void stop() override
    {
        std::cout<<"Mercedes car stopped.\n";
    }
    ~Mercedes() override
    {
        std::cout<<"Mercedes car destroyed.\n";
    }
};

int main()
{
    Car *c;

    c = new Defender();
    c->start();
    c->stop();
    delete c;      // correctly calls Defender::~Defender(), then Car::~Car()
    c = nullptr;

    c = new Mercedes();
    c->start();
    c->stop();
    delete c;      // correctly calls Mercedes::~Mercedes(), then Car::~Car()
    c = nullptr;

    return 0;
}