#include<stdio.h>

int main()
{
    float pi=3.14;
    int radius;
    printf("enter your radius here\n");
    scanf("%d",&radius);
    int height;
    printf("enter your height here\n");
    scanf("%d",&height);

    printf("volume of cylinder=%f",pi*radius*radius*height);

    
    return 0;
}