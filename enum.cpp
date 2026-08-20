// Here we gonna learn about the concept 'ENUM'.
// Enum is generally used for making the initialization of any variable easier.
// Instead of declaring each and every variable, we declare the variables all together at once, inside 'Enum', as a result, it becomes easier to access.

// BTW, Enum has two version: Normal and Class type..
// Enum normal is okay okay, and does get the work done..
// But Enum-class gets the work completely done, where Enum normal fails..

// Elements present in Enum work as zero-th index format...
// We can change the indexing by just initializing a value to the element, and the rest of the element follow that initialized indexing.


#include<iostream>

enum day{Mon, Tue, Wed, Thu, Fri, Sat, Sun};

// enum day { mon = 1, tues, wed, thurs =7, fri, sat, sun}; // After, changing the value of one, then the other also gets changed accordingly.

int main()
{
    day d; // Declared an instance 'd' of the class 'enum'.
    d = Mon; // By 'Mon', we are indirectly declaring the value of the zero-th index. Means for indicating the index value, we need to use the element...
    // d = 0; // This method is not allowed, cause, what if the index-valued is being changed or modified..

    std::cout<<d<<"\n";
    std::cout<<Mon<<"\n"; // We can also access in this way.

    return 0;
}


// Example of 'ENUM CLASS'.
// Benefits of 'Enum class' over 'enum' is: It helps securing the things up, It is scoped instead of being global, Prevention in name conflicts, Recommended by others for using.
// Regarding the name conflict: Consider there are two 'Enum' variable you declared and co-incidently both of them contain the same values, then it gonna create problem while compiling the file and running it, but, 'Enum Class' makes sure, there come no problem by seperating them in class.

// It is very easy, as that of 'Enum', the only thing is the using of 'scope resolution' for accessing the inner values of 'Enum'.

#include<iostream>

enum class Day{Monday = 4, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

std::string getDayNames(Day day)
{
    switch(day)
    {
        case Day::Monday : return "Monday";
        case Day::Tuesday : return "Tuesday";
        case Day::Wednesday : return "Wednesday";
        case Day::Thursday : return "Thursday";
        case Day::Friday : return "Friday";
        case Day::Saturday : return "Saturday";
        case Day::Sunday : return "Sunday";
        default: return "Invalid";
    }
}

int main()
{
    Day d;
    d = Day::Monday; // The reason for using scope resolution is 

    // std::cout<<d; // This is not allowed, cause 'Enum-class' generally don't allow the automatic convertion into 'int' or any data-type..

    // So, for accessign, let's create a funcion..
    std::cout<<"Today is: "<<getDayNames(d)<<".\n";
    return 0;
}