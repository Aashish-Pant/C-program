//Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include <stdio.h>
void check(int angle1 , int angle2, int angle3)
{
    int sum = angle1 + angle2 + angle3; 
    /*
     * If sum of angles is 180 and
     * angle1, angle2, angle3 is not 0 then
     * triangle is valid.
     */
    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) 
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
    int angle1, angle2, angle3, sum;
    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    check(angle1 ,angle2 ,angle3 );
    return 0;
}