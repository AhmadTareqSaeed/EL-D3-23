// merge two arrays together

#include <iostream>
#include <iterator>

void find(int arr[] , int size)
{
    int e = 0 , o = 0 ; 
    int even[5] ; 
    int odd[5]  ;
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i]%2 == 0 )
        {
            even[e] = arr[i] ; 
            e++;
        }
        else
        {
            odd[o] = arr[i]; 
            o++;
        }
    }
    std::cout<<"Even numbers :";
    for(int i = 0 ; i < e ; i++)
    {
        std::cout<<even[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Odd numbers :";
    for(int i = 0 ; i < o ; i++)
    {
        std::cout<<odd[i]<<" ";
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = std::end(arr)-std::begin(arr);
    find(arr,size);
    return 0;
}
