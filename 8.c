//Write a C program to input any alphabet and check whether it is vowel or consonant.
#include <stdio.h>
void find(char ch)
{
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
     printf("character %c is vowel\n",ch);
    
    else
      printf("character %c is consonant\n");
}
int main() {
    
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    find(ch);

    return 0;
}