#include<stdio.h>

int main()
{
  int n=10;
  int factorial=1;
  int i=1;

  for(int i=1;  i<=n;i++){
    factorial*=i;
  }


   printf("factorial of 10 is %d",factorial);
    return 0;
}