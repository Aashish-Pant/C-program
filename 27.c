//Write a program in C to count a total number of duplicate elements in an array
/*#include<stdio.h>
#include<stdlib.h>
int duplicate(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)      THIS COUNT ALL DUPLICATE NOT DISTINCT DUPLICATE
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    int *p;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    p=(int*)malloc(sizeof(int)*n);
    
    printf("Enter elements in array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    int dup=duplicate(p,n);
    printf("Duplicate elements in array :%d",dup);
    
    return 0;
} */



#include<stdio.h>
#include<stdlib.h>
int duplicate(int arr[],int n)
{
    int count=0;
    int flag;
    
    for(int i =0 ; i<n ;i++){
        flag =0;
        for(int j =0;j<i;j++){
            if(arr[i]==arr[j]){
                flag =1;
                break;
            }
        }
        if(flag==0){
           for(int j =i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        } 
        }
    }
    return count;
}
int main()
{
    int n;
    int *p;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    p=(int*)malloc(sizeof(int)*n);
    
    printf("Enter elements in array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    int dup=duplicate(p,n);
    printf("Duplicate elements in array :%d",dup);
    
    return 0;
}