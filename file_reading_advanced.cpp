// Here we gonna see how to read something from a file, despite of having zero knowledge what's written in it.


#include<iostream>
#include<fstream>
#include<string>

int main()
{
    std::ifstream in("file_1.txt");

    if(!(in.is_open()))
    {
        std::cerr<<"The file is not open.\n";
        return -1;
    }

    // For reading each and everything using a loop.
    std::string line;
    while(std::getline(in, line))
    {
        std::cout<<line<<"\n";
    }

    in.close();
    
    return 0;
}