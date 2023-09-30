#include <algorithm>
#include <iostream>
#include <iterator>

int main()
{
    int arr[] = {23,6,134,1,34}; 
    int size  = sizeof(arr)/sizeof(arr[0]) ; 

    std::sort(arr,arr+size,[](int a, int b)
    {
        return a < b ;
    });

    std::cout<<"Ascending order: " ; 
    
    for(int i = 0 ; i  < size ; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    
    std::cout << std::endl;

    std::sort(arr,arr+size,[](int a, int b)
    {
        return a > b ;
    });

    std::cout<<"Descending order: " ; 
    
    for(int i = 0 ; i  < size ; i++)
    {
        std::cout<<arr[i]<<" ";
    }

    return 0;
}
