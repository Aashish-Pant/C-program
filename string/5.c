//Write a C program to convert lowercase string to uppercase.

#include <stdio.h>
#include <stdlib.h>
void low_to_up(char str[])
{    
   int i=0;
   while(str[i]!='\0')
   {
      if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
      i++;
   }
}
int main()
{
    char str[100];
    printf("Enter String:\n");
    gets(str);
    low_to_up(str);
    printf("after change string is:%s",str);
   
    return 0;
}