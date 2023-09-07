#include <iostream>
#include <string>
#include <bitset>
 
int main()
{

    std::cout << "Choose (B) to convert from Decimal to Binary or (D) to convert from Binary to Decimal: " ; 
    char input = 1; 
    std::cin >> input ; 
    if(input == 'B')
    {
        std::cout<<"Enter your decimal number to convert it to binary: ";
        int dec = 0 ; 
        std::cin>> dec ; 
        std::string binary = std::bitset<8>(dec).to_string();
        std::cout << binary << std::endl ; 
    }

    else if (input == 'D')
    {
        std::string bin ;
        std::cin >> bin ;
        std::bitset<8>bits(bin);
        unsigned long dec = bits.to_ulong();
        std::cout << dec << std::endl;
    }

    else
    {
        std::cout << "Error";
    }
    return 0;
}
