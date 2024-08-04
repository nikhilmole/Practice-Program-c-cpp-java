#include<stdio.h>
int Addition (int iNo1, int iNo2, int iNo3)
{
    int Ans = 0;
    Ans = iNo1 + iNo2 + iNo3;
    return Ans;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iResult = 0;

    printf("Enter First Number : \n");
    scanf("%d" , &iValue1);
    printf("Enter Second number : \n");
    scanf("%d" , &iValue2);
    printf("Enter Third Number : \n");
    scanf("%d", &iValue3);

    iResult = Addition(iValue1, iValue2, iValue3);
    printf("Ans is : %d \n" ,iResult);

    printf("Thank You For Using Addition Application");
    return 0;
}