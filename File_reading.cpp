// File reading.

// Here, we are going to read from the file, that is being created, so don't get confuse with the symbol '>>', as it indicates that we are collecting the data and printing it in the terminal.

// For reading something from the file, the file must be existing, if the file is not existing, then it is not going to create a new file.
// When reading the data, we should already know the format of data stored in the file, if we don't knwo the format, then we can't read from the file.
// So, there are some pre-defined format of order available like 'jpg-file', 'pdf-file' and etc..



#include<iostream>
#include<fstream>
#include<string>

int main()
{
    std::ifstream in("file_1.txt");

    if(in.is_open())
    {
        std::cout<<"The file is open.\n";
    }
    else
    {
        std::cerr<<"The file ain't open.\n";
        return -1;
    }
    std::string name;
    int age;
    std::string occupation;
    std::string success;

    // Reading from the file that has been created.
    getline(in, name);  // It is reading/collecting the name from the file.
    
    in>>age;  // It is reading/collecting the age from the file. After reading it is leaving a newline character '\n'.
    if(in.fail())
    {
        std::cerr<<"Invalid input!!";
        return -2;
    }

    in.ignore();   // It is used for solving/clearing out the mistake done by the line 'getline(in, occupation)'.

    getline(in, occupation);  // It is by mistakely reading the newline character '\n' leaved by 'age' instead of reading the string. So, to solve the problem, we are using '.ignore()', as it helps out in ignorring the mistake done.

    getline(in, success);

    in.close();

    std::cout<<"Name: "<<name<<"\n";
    std::cout<<"Age: "<<age<<"\n";
    std::cout<<"Occupation: "<<occupation<<"\n";
    std::cout<<"Success level: "<<success;

    return 0;
}