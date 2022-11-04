//WAP TO swap two numbers with 3rd variable
/*#include <stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("after swap %d %d ",a,b);
    return 0;
} */

//WAP TO swap two numbers without 3rd variable
#include <stdio.h>

void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("after swap %d %d ",a,b);
    return 0;
}

