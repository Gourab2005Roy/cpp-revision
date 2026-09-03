// File writing methods.

// Here, we gonna see the different methods of writing in a file.



#include<iostream>
#include<fstream>

int main()
{
    std::ofstream out("file_1.txt", std::ios::app);

    out<<"\nI will be very successful business man.\n";
    out.close();

    return 0;
}