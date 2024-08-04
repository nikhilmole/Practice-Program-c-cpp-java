#include<stdio.h>

int main()
{
    int standard = 0;
    printf("Enter Your Standard :");
    scanf("%d",&standard);

    if(standard == 1)
   { printf("Your Exam At 7 Am \n");}

    else if(standard == 2)
    {printf("Your Exam At 8 Am \n");}

    else
    {printf("Gate lost \n");}


    return 0;
}