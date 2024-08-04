#include<stdio.h>

    int Addition (int Value1,int Value2)
{   
    printf("Inside Addition\n");
     int Ret = 0;
    Ret = Value1 + Value2;
    return Ret;
}
int Substraction (int Value3 , int Value4)
{
    printf("Inside Substraction\n");
    int Ret = 0;
    Ret = Value3 - Value4;
    return Ret;
}
int Multiplication(int Value5 ,int Value6)
{
    printf("Inside Multiplication\n");
    int Ret = 0;
    Ret = Value5 * Value6;
    return Ret;
}
int Divide(int Value7, int Value8)
{
    printf("Inside Dividasion\n");
    int Ret = 0;
    Ret = Value7 / Value8;
    return Ret;
}

int main()
{
    int A = 30;
    int B = 20;
    int Ans = 0;

    printf("Inside Main\n");
    Ans = Addition (A,B);
    printf("Addition is %d \n",Ans);

    Ans = Substraction(A,B);
    printf("Substraction is %d \n",Ans);

    Ans = Multiplication(A,B);
    printf("Multiplication is %d \n",Ans);

    Ans = Divide(A,B);
    printf("Dividasion is %d \n",Ans);

    return 0;
}