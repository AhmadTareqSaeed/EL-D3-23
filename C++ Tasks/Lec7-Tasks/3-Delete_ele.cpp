#include <iostream>

void del_ele(int arr[] , int num , int size);

void del_ele(int arr[] , int num , int size)
{
    for(int i = num - 1 ; i < size ; i++)
    {
        arr[i] = arr[i+1] ; 
    }
    for(int i = 0 ; i < size-1 ; i++)
    {
        std::cout<<arr[i]<<" ";
    }
}

int main()
{
    int size = 0 ;
    int arr[6] = {1,2,3,4,5,6}; 
    std::cout<<"Array Elements: ";
    for(int i : arr)
    {
        std::cout<<i<<" ";
        size++;
    }
    std::cout<<std::endl;
    std::cout<<"Enter index of element: ";
    
    int index = 0;
    std::cin>>index; 

    del_ele(arr,index,size);
    std::cout<<std::endl;
    
    return 0;
}
