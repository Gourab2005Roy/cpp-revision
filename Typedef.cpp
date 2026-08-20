// Typedef..
// Here, we gonna learn the working principle of 'Typedef'...

// There are times, where we do declare variables and work with it.
// But, gets no idea about the used variable while reviewing our code after days..
// So to make sure, there happens nothing such, we use 'Typedef' and make our work more easier....

// Way of reading a 'typedef'
// typedef <existing_type> <new_name>;
// Read it right to left: "new_name" is a typedef for 'existing_type'


#include<iostream>

typedef int marks;

int main()
{
    marks m1, m2; // Here, 'm1' 'm2' are the variables, and the data-type of the variables is the same as that of the data-type that's being used while describing the typedef..
    
    m1 = 10;  // Initialzing value in the variable..

    std::cout<<m1;

    return 0;
}