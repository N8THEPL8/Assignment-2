
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,i;

    float start, rate, add,end,intrest;



    do
    {
        printf("Enter initial investment amount: ");
        scanf("%f",&start);
        if (start < 0) printf("Initial investment cannot be a negitive.\n");

    }while (start < 0);



    do
    {

        printf("enter total years: ");
        scanf("%d", &year);
        if (year <= 0) printf("Years must be greater than zero.\n");
    }while(year <= 0);




    do
    {

        printf("Enter return rate: ");
        scanf("%f", &rate);
        if (rate < 0) printf("Rate cannot be negative.\n");
    }while(rate < 0);



    do
    {


        printf("Enter additional contribution per year: ");
        scanf("%f",&add);
        if (add < 0)  printf("Contribution cannot be negitive.\n");

    } while(add < 0);

    printf("Year      Starting Balance    Interest            End Balance         \n");
    printf("**********************************************************************\n");

    for( i = 1; i <= year; i++)
    {
        intrest = start * rate / 100;
        end = start + intrest;
        printf("%-10d%-20.2f%-20.2f%-20.2f\n",i,start, intrest,end);
        start = end+add;
    }

    return 0;
}
