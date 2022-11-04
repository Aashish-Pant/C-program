//Write a C program to find maximum between two numbers.

#include <stdio.h>
void find(int a,int b)
{
    
    if(a>b)
     printf("first number %d is greater\n",a);
    else
     printf("second number %d is greater\n",b);
}
int main() {
    
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    find(a,b);

    return 0;
}