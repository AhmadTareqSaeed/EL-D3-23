//1- create a function to find the maximum number of array
#include <iostream>

#define size 6 

void max_num(int arr[]) ; 

void max_num(int arr[])
{
    int max_num = 0 ;

for(int i = 0 ; i < size ; i++)
{
    max_num = std::max(max_num,arr[i]);
}
std::cout<<max_num<<std::endl;
} 

int main() 
{
int arr[size] = {11,43,15,90,34,59};
max_num(arr);
}
