//Write a C program to check whether a character is uppercase or lowercase alphabet.
#include <stdio.h>
void find(char ch)
{
    if(ch>='A' && ch<='Z')
     printf("character %c is uppercase alphabet\n",ch);
    else
     printf("character %c is a lowercase character \n",ch);
}
int main() {
    
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    find(ch);

    return 0;
}