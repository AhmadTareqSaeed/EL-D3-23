#include <iostream>
#include <cstdio>

int main()
{
    printf("| Char|Ascii|\n");
    char ch ; 
    int  i ; 
    for(i = 48 ; i < 128 ; i++)
    {
        ch = i ; 
        printf("| %c   |%d   |\n",ch,ch);
    }
    return 0;
}
