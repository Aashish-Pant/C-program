//Write a C program to check whether a number is even or odd.
#include <stdio.h>
void check(int a)
{
  if((a&1)==0)
     printf("number is even\n");
    
 else
      printf("number is odd\n");
}
int main() {
    
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    check(a);

    return 0;
}