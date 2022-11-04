//WAP TO FIND REMAINDER WITHOUT % OPERATOR
#include <stdio.h>
int remain(int num,int div)
{
    int rem=num-(div*(num/div));
    return rem;
}
int main() {
    // Write C++ code here
    int a,b;
    printf("enter three numbers\n");
    scanf("%d%d",&a,&b);
    printf("rem is %d",remain(a,b));
    

    return 0;
}