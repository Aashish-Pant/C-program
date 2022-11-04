//Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
void find(int a)
{
  if(a%55==0)
     printf("number is divisible by 5 and 11\n");
    
 else
      printf("number is not divisible by 5 and 11\n");
}
int main() {
    
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    find(a);

    return 0;
}