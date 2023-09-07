#include <iostream>
#include <ostream>

int main()
{
    char word ; 
    int check = 0 ;  
    std::cout << "Enter letter : ";
    std::cin  >> word ; 
    switch(word)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        check = 1 ; 
    }

    if(check)
    {
        std::cout<<word<<" is vowel"<<std::endl;
    }
    else
    {
        std::cout<<word<<" is not vowel"<<std::endl;
    }
    return 0;
}
