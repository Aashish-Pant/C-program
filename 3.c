//Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
void find(int a)
{
  if(a>0)
     printf("positive number\n");
  else if(a<0)
     printf("negative number\n");
   else
      printf("its zero\n");
}
int main() {
    
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    find(a);    

    return 0;
}