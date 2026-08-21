// Armstrong number are those number, whose addition of each and every digit whose power is the total number of digit equals the same

// Here, we gonna check whether the given number is an Armstrong number or not...


#include<iostream>

int power(int remainder, int count)
{
    int value = 1;
    while(count != 0)
    {
        value *= remainder;
        count--;
    }
    return value;
}

int main()
{
    int num;
    std::cout<<"Enter a number to check whether it is an Armstrong number: ";
    if(std::cin.fail() || !(std::cin>>num))
    {
        std::cerr<<"Invalid input!!";
        return -1;
    }
    int count = 0;
    int sum = 0;
    int second_num = num;
    int third_num = num;
    while(second_num != 0)
    {
        int remainder = second_num%10;
        count++;
        second_num/=10;
    }
    std::cout<<"Total number of digit: "<<count<<"\n";

    while(third_num != 0)
    {
        int remainder = third_num%10;
        sum += power(remainder, count);
        third_num/=10;
    }
    std::cout<<"The value of the summation is: "<<sum<<"\n";

    if(sum == num)
    {
        std::cout<<"Yup!! It is an Armstrong number.\n";
    }
    else
    {
        std::cerr<<"Nope!! It is not an Armstrong number.\n";
    }

    return 0;
}