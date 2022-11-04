//Write a C program to input any character and check whether it is alphabet, digit or special character.
#include <stdio.h>
void find(char ch)
{
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
     printf("character %c is alphabet\n",ch);
    
    else if(ch>='0' && ch<='9')
      printf("character %c is digit\n",ch);
    else
     printf("character %c is a special character \n",ch);
}
int main() {
    
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    find(ch);

    return 0;
}