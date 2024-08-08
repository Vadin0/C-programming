#include<stdio.h>

int main()
{
    printf("formula for calculation of simple interest is P*R*t/100\n");
    int principal;
    printf("enter your principal here\n");
    scanf("%d",&principal);
    float rate;
    printf("enter your rate here\n");
    scanf("%f",&rate);
    float time_in_years;
    printf("enter your time in years here\n");
    scanf("%f",&time_in_years);
    printf("your simple interest is %f",principal*rate*time_in_years/100);
    return 0;
}