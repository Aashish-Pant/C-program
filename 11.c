//Write a C program to input week number and print week day.
#include <stdio.h>
void check(int week)
{
  if(week == 1)
    {
        printf("Monday");
    }
    else if(week == 2)
    {
        printf("Tuesday");
    }
    else if(week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("Thursday");
    }
    else if(week == 5)
    {
        printf("Friday");
    }
    else if(week == 6)
    {
        printf("Saturday");
    }
    else if(week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }
}
int main() {
    
    int week;
    printf("enter a week number(1-7):\n");
    scanf("%d",&week);
    check(week);

    return 0;
}