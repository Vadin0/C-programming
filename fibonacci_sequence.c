#include<stdio.h>

int main(){
    int i=0;
    int n=1;
    int fibb;
    int number;

    printf("enter your number here %d\n");
    scanf("%d",&number);
    


    for(int i=0;i<=n;n++){
    fibb=n+=i++;

    printf("fibonacci sequence till number 28 is %d\n",fibb);

    }
    
    return 0;
}