#include<stdio.h>

int main()
{
int year,remainder;
printf("enter the year that you want to check here\n");
scanf("%d",&year);
remainder=year%4 && year%100!=0|| year%400==0;
if(remainder==0){
    printf("this year is a leap year");
}
else{
printf("this year is not a leap year");
}
return 0;

}
