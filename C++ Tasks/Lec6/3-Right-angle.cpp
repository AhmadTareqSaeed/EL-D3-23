#include <algorithm>
#include <iostream>
#include <ostream>
#include <random>
#include <cmath>

int main()
{
    int arr[3] ;
    std::cout << "Enter sides values : " ;
    for(int i = 0 ; i < 3 ; i++)
    {
        std::cin  >> arr[i]; 
    }
    std::sort(arr,arr+3);
    
    float a = arr[0];
    float b = arr[1];
    float c = arr[2];

    float a1 = std::pow(a,2);
    float b1 = std::pow(b,2);
    float c1 = std::pow(c,2);


    if(c1 == (a1+b1))
    {
        std::cout << "Right angled triangle" << std::endl;
    }
    else
    {
        std::cout << "Error";
    }
}

// int main()
// {
//     int i , j ,rows , d;
//     std::cout << "Enter number of rows : " ;
//     std::cin >> rows ; 
//     for(i = 1 ; i <= rows ; i++)
//     {
//         for(j = 1 ; j <= i ; j++)
//         {
//             std::cout<<"*";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// int main()
// {
//     int i , j ,rows , d;
//     std::cout << "Enter number of rows : " ;
//     std::cin >> rows ; 
//     for(i = 0 ; i < rows ; i++)
//     {
//         for(j = i ; j < rows ; j++)
//         {
//             std::cout << "*" ;
//         }
//         std::cout<<std::endl;
//     }
//     return 0;



