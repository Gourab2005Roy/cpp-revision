// File writing.

// File writing, means writing something within in the file, so don't get confuse with '<<' symbol, here, this symbol is symbolizing that we want to print this in the file.

// When I'm opening this file, file should be already existing, if it is existing then it will open the file.
// If it is not existing, then it will create a new file with the same name.

// If already file is there, and it is having some contents, it is remove the contents and fresh contents will be used.

// If I want the contents as it is, means I don't want to remove the contents and work on that content only then, we use 'append' to add something to the existing file.



#include<iostream>
#include<fstream> // This is the header-file that is been required for dealing with file.


int main()
{
    std::ofstream out("file.txt"); // If we want to append, then use 'ios::app', whereas for removing/truncing use 'ios::trunc'.

    std::ofstream out_1("file_1.txt");

    out<<"Roy"<<"\n";
    out<<21<<"\n";
    out<<"Businessman\n";

    out.close(); // This is used for closing the file that is being created. If we don't close the file then sometimes it may lead to some un-expected behaviour and can cause here.

    std::string name = "Roy.";
    std::size_t age = 21;
    std::string occupation = "Future successful businessman in the field of GOLD and GEM-STONE.";
    out_1<<name<<"\n";
    out_1<<age<<"\n";
    out_1<<occupation;

    out_1.close();

    return 0;
}