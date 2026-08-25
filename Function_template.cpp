// Function template.


// Consider there are two functions, exactly same except the data-type, then instead of writting one thing again again, we can use 'FUNCTION-TEMPLATE'.
// Function-template, is a template that is used for writting functions, that are of different data-type but exactly same incase of the other concepts.
// Function-template can be used, if the functions are generic in terms of data-type.

// BENEFIT:- We can write single function, instead of writting different function, if there is a change only in the data-type.
// For better understanding, put int / float instead of 'T'.
// This template works for each and almost every-type of data-type.
// While using template, we should ensure that the data-type are of same. Because in the 'template', we have only 'T' that denotes the functionality of the function.
// If the declared data-type are different, then the declared variable of 'template' gets confused in term taking the data-type.



#include<iostream>

template <class t>

t maximum(t x, t y)
{
    return (x>y? x:y); // Check which is greater. If 'x', then return 'x', else 'y'.
}

int main()
{
    std::cout<<maximum(10, 20)<<"\n";
    return 0;
}