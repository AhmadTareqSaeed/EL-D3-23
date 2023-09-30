// merge two arrays together

#include <iostream>

void merge(int arr1[] , int arr2[] ,int size, int size1, int size2);

void merge(int arr1[] , int arr2[] ,int size ,int size1, int size2)
{
    int merged_array[size] ;
    int j = 0 ;
    for(int i = 0 ; i< size1 ; i++)
    {
        merged_array[i] = arr1[i] ; 
    }
    for(int i = size1 ; i< size ; i++)
    {
        merged_array[i] = arr2[j] ; 
        j++;
    }
    for(int i = 0 ; i  <size ; i++)
    {
        std::cout<<merged_array[i]<<" " ;
    }
    std::cout<<std::endl;
}

int main()
{
    int arr1[3] = {10,20,30};
    int arr2[2] = {40,50};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int size  = size1+size2;

    merge(arr1, arr2, size ,size1, size2);

    return 0;
}
