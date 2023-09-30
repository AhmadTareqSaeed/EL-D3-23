// 2- create a function to search to the number in the array which number is taken from user

#include <iostream>
#define size 6 

void find(int arr[],int num) ;
void print(int arr[]);


int main() 
{
int arr[size] = {11,43,15,90,34,59};
print(arr);
int num = 0 ;
std::cout<< "Enter number: " ;
std::cin >> num;
find(arr,num);

}

void find(int arr[], int num )
{
int i = 0 ;
for(i = 0 ; i < size ; i++)
{
    if(num == arr[i])
    {
        std::cout<<num<<" is found"<<std::endl;
        break;
    }
}
    if(i == size)
    {
        std::cout<<"Error! "<<num<<" doesn't exist in the numbers, Try again"<<std::endl;
    }
}

void print(int arr[])
{
    for(int i = 0 ; i < size ; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
