//Write a C program to compare two strings.
#include <stdio.h>
int compare(char * str1, char * str2)
{
    int i = 0;
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0' && str2[i] == '\0')
            break;

        i++;
    }

    return str1[i] - str2[i];
}
int main()
{
    char str1[100], str2[100];
    int res;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    res = compare(str1, str2);
    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else
       printf("Both strings are not equal.");
    return 0;
}




