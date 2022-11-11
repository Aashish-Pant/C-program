//Write a C program to find total number of alphabets, digits or special character in a string.
#include <stdio.h>
void count(char ch[],int *d,int *a,int *s)
{  int i=0;
   while(ch[i]!='\0')
   {
     if((ch[i]>=65 && ch[i]<=90)||(ch[i]>=97 && ch[i]<=122))
        (*a)++;
     else if(ch[i]>='0' && ch[i]<='9')
        (*d)++;
     else
      (*s)++;
   }
}
int main() {
    
    char str[100];
    printf("Enter String:\n");
    gets(str);
    int d=0,alpha=0,sp=0;
    count(str,&d,&alpha,&sp);
    printf("total number of alphabets in string is:%d",alpha);
    printf("total number of digits in string is:%d",d);
    printf("total number of special character in string is:%d",sp); 

    return 0;
}