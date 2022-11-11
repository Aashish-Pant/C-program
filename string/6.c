//Write a C program to convert uppercase string to lowercase.

#include <stdio.h>
#include <stdlib.h>

void up_to_low(char str[])
{    
   int i=0;
   while(str[i]!='\0')
   {
      if(str[i]>='A' && str[i]<='Z')
        str[i]+=32;
      i++;
   }
}
int main()
{
    char str[100];
    printf("Enter String:\n");
    gets(str);
    up_to_low(str);
    printf("after change string is:%s",str);
   
    return 0;
}