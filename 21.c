/*
 Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill

*/
#include <stdio.h>
float amount(int unit)
{
    float amt;
    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = (50*0.50) + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = (50*0.50) +(100*0.75)+ ((unit-150) * 1.20);
    }
    else
    {
        amt = (50*0.50) +(100*0.75)+ (100*1.20) + ((unit-250) * 1.50);
    }
    return amt;
}
int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);
    amt=amount(unit);

    

    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}


