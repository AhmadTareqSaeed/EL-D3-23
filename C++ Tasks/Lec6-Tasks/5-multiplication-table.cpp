#include <iostream>
#include <ostream>

int main()
{
    int number ,sum ;
    std::cout << "Enter number : " ;
    std::cin >> number ; 
    for(int i = 1 ; i <= number ; i++)
    {
        sum = number * i ;
        std::cout << number << "*" << i << " = " << sum << std::endl ; 
    }
}
