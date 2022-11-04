//Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include <stdio.h>
void check(int side1, int side2, int side3)
{
    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
}
int main()
{
    int side1, side2, side3;
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);

    check(side1,side2,side3);

    return 0;
}