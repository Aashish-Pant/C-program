//Write a C program to toggle case of each character of a string.
#include <stdio.h>
#include <stdlib.h>
void toggle(char str[])
{    
   int i=0;
   while(str[i]!='\0')
   {
      if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
      else
       str[i]+=32;
    i++;
   }
}
int main()
{
    char str[100];
    printf("Enter String:\n");
    gets(str);
    toggle(str);
    printf("after change string is:%s",str);
   
    return 0;
}