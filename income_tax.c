#include<stdio.h>

int main()
{
  float income,tax;
  printf("enter your income here in lakhs\n");
  scanf("%f",&income);

  if(income>=2.5 && income<5){
    printf("your tax is %fL\n",income*0.05);
  }
  else if(income>=5 && income<10){
    printf("your tax is %fL\n",income*0.2);
  }
  else if(income>=10){
    printf("your tax is %fL\n",income*0.3);
  }
 else if(income<=2.5){
    printf("you dont have to pay any tax\n");
 }

 return 0;
}