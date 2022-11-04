//Write a C program to check whether a year is leap year or not.
#include <stdio.h>
int find(int a)
{
    if((a%4==0) &&((a%400==0) || (a%100!=0)))
     printf("its a leap year\n");
    
    else
      printf("not a leap year\n");
}
int main() {
    
    int a;
    printf("enter a year\n");
    scanf("%d",&a);
    find(a);
    return 0;
}