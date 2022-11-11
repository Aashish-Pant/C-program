//Write a C program to concatenate two strings.

#include <stdio.h>
#include <stdlib.h>
void concat(char str1[],char str2[],char str3[])
{    int l1=sizeof(str1)/sizeof(str1[0]);
     int l2=sizeof(str2)/sizeof(str2[0]);
     int i=0,j=0;
     while(str1[i]!='\0')
     {
        str3[i]=str1[i];
        i++;
     }
     
     while(str2[j]!='\0')
     {
        str3[i]=str2[j];
        i++;
        j++;
     }
     str3[i]='\0';
}
int main()
{
    char str1[100] ,str2[100] ,str3[100];
    printf("Enter first String:\n");
    gets(str1);
    printf("Enter second String:\n");
    gets(str2);
    concat(str1,str2,str3);
    printf("after concatenation string is:%s",str3);
   
    return 0;
}