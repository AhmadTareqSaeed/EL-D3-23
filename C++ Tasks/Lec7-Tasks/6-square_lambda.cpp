#include <iostream>
#include <iterator>

int main()
{
    auto fun = [](int num)
    {
        return num*num ; 
    } ;
    int number = 0 ; 
    std::cout<<"Enter number: ";
    std::cin >> number ; 
    int sum = fun(number) ; 
    std::cout<<sum<<std::endl;
    return 0;
}
