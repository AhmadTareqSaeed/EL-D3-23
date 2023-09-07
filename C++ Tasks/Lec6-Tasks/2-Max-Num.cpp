#include <iostream>
#include <cstdio>


int main()
{
    int num1,num2,num3;
    std::cout << "Enter three numbers: " << std::endl;
    std::cin >> num1 >> num2 >> num3; 
    int m = std::max(num1,num2);
    m = std::max(m,num3);
    std::cout << "Maximum number = " << m <<std::endl;
    return 0;
}


// Solution in c style
// int main()
// {
//     int num1, num2 ,num3 ;
//     std::cout << "Enter three numbers : " << std::endl;
//     std::cin >> num1 >> num2 >> num3; 
//     int max ;
//     max = num1 ;
//     if(num2 > max)
//     {
//         max = num2 ; 
//     }
//     if(num3 > max)
//     {
//         max = num3;
//     }
//     std::cout << "Maximum number = " << max << std::endl;
//     return 0 ; 
// }
