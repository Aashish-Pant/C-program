//Write a C program to find length of a string.

#include<stdio.h>
int len(char a[])
{
    int i=0;
    while(a[i]!='\0')
      i++;
    return i;
}
int main()
{
    char str[100];
    printf("Enter the String: ");
    gets(str);
    //puts(str);
    //printf("The string you entered is : %s\n", str);
    int l=len(str);
    printf("Length of Str is %d", l);
    return 0;
}