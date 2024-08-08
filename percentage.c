#include<stdio.h>

int main()
{
    float physics_marks, chemistry_marks, maths_marks,percentage ;

    printf("enter your physics marks here\n");
    scanf("%f",&physics_marks);
    printf("enter your chemistry marks here\n");
    scanf("%f",&chemistry_marks);
    printf("enter your maths marks here\n");
    scanf("%f",&maths_marks);
    percentage=((physics_marks+chemistry_marks+maths_marks) / 3);
    printf("your percetage is %f \n",percentage);
    if(percentage>40 && physics_marks>33 && maths_marks>33 && chemistry_marks>33){
        printf("you passed this class\n");
    }
    else{
        printf("you failed this class\n");
    }

    
}