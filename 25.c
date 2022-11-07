//Write a program in C to read n number of values in an array and display it in reverse order.

/*#include<stdio.h>
#include<stdlib.h>

void swap(int a[],int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void reverse(int arr[] ,int n)  //this is simple not return array 
{
    int i=0 ,j=n-1;
    while(i<=j)
    {
        swap(arr,i,j);
        i++,j--;
    }
}
int main()
{
    int n;
    int *p;
    printf("Enter number of elements:");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Entered number of elements: %d\n", n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    reverse(p,n);
    printf("after swap:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
} */

#include<stdio.h>
#include<stdlib.h>

void swap(int a[],int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int * reverse(int n)

{   
    int *q;
    
    q=(int*)malloc(sizeof(int)*n);
    printf("Entered number of elements: %d\n", n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&q[i]);
    }
    int i=0 ,j=n-1;
    while(i<=j)
    {
        swap(q,i,j);
        i++,j--;
    }
    return q;
}
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int *p =reverse(n);
    
    
    printf("after swap:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}