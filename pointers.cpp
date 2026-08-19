#include <iostream>

int main() {
    int number = 10;
    int* ptr = &number;

    std::cout << "Value: " << number << std::endl;
    std::cout << "Address: " << ptr << std::endl;
    std::cout << "Value via pointer: " << *ptr << std::endl;

    return 0;
}