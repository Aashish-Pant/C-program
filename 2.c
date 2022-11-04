//Write a C program to find maximum between three numbers.
#include <stdio.h>
void max(int a,int b,int c)
{
    
    if(a>b && a>c)
     printf("first number %d is greater\n",a);
    else if(b>a && b>c)
     printf("second number %d is greater\n",b);
    else
      printf("third number %d is greater\n",c);
}


int main() {
    
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    max(a,b,c);    

    return 0;
}