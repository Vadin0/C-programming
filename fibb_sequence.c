#include<stdio.h>

int main(){
 
int a=0;
int b=1;
int c;
int n;

printf("enter no of terms in fibonacci sequence here\n");
scanf("%d",&n);

for(int i=1; i<=n;i++){
printf("%d\n",a);
c=a+b;
a=b;
b=c;


}
}