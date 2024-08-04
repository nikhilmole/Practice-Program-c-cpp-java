#include<stdio.h>
int Addition (int A, int B)
{
    int Ret = 0;
    Ret = A + B;
    return Ret;
}
int Substraction(int A , int B)
{
    int Ret = 0;
    Ret = A-B;
    return Ret;
}
int Multiplication(int A , int B)
{
    int Ret = 0;
    Ret = A * B;
    return Ret;
}
int Dividasion(int A , int B)
{
    int Ret = 0;
    Ret = A/B;
    return Ret;
}
int main()  
{
    int value1 = 0;
    int value2 = 0;
    int Ans = 0;

    printf("Enter First no :");
    scanf("%d",&value1);

    printf("Enter Second no :");
    scanf("%d" ,&value2);

    Ans = Addition (value1,value2);
    printf("Addition is %d \n",Ans);

    Ans = Substraction (value1,value2);
    printf("Substraction is %d \n",Ans);

    Ans = Multiplication (value1,value2);
    printf("Multiplication is %d \n",Ans);

    Ans = Dividasion (value1,value2);
    printf("Dividasion is %d \n", Ans);

    return 0;
}