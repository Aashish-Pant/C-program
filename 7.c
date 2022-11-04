//Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
void find(char ch)
{
   if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
     printf("character %c is alphabet\n",ch);
    
    else
      printf("character %c is not alphabet\n");
}
int main() {
    
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    find(ch);    

    return 0;
}