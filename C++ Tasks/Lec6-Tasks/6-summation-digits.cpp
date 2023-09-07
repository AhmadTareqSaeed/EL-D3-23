#include <iostream>

int main()
{    
    int num ;

    std::cout<< "Enter number: ";
    std::cin >> num ;

    int sum = 0;       
    while(num)
    {    
        int temp = num % 10; 
        sum = sum + temp;
        num = num / 10;    
    }    
    std::cout << sum << std::endl ;      
    return 0;  
}   

