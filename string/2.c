//Write a C program to copy one string to another string.
#include <stdio.h>
#include <stdlib.h>
char * copy(char a[] ,int l)
{
    char* p= (char*)malloc(l*(sizeof(char)));
    int i=0;
    while(a[i]!='\0')
    {
      p[i]=a[i];
      i++;
    }
    p[i]='\0';
    
    return p;
}
int main()
{
    char str[100];
    printf("Enter the String: ");
    gets(str);
    int l=sizeof(str)/sizeof(str[0]);
    
    //puts(str);
    //printf("The string you entered is : %s\n", str);
    char *c =copy(str,l);
    printf("copy string is:%s",c);
   
    return 0;
}