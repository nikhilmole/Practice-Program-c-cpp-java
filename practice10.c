// Step1 :  Understand the problem statement
// Step1 :  Write Algorithm
// Step1 :  decide The programming Language
// Step1 :  Write a Program
// Step1 :  Testing

/*
                Algorithm
    Accept one Number as No
    And divided by 2
    The remider is 0
    if it is a even number  
    whether if is is not the number is Odd           
*/
#include<stdio.h>
#include<stdbool.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///     Function name : CheckevenOdd
///     Discription : checkeven od number 
///     Input :     Integer
///     Output :    Integer
///     Author Name : Nikhil Yuvraj Mole
///     Date : 17/4/2024
//////////////////////////////////////////////////////////////////////////////////////////////////////////
bool CheckEvenOdd (int iNo1)
{
    if((iNo1 %2 ) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{   
    int iValue1 = 0;
    bool bRet = false;
    printf("Enter Number :");
    scanf("%d", &iValue1);

    if(bRet == true)
    {
        printf("%dThe number is Odd ", iValue1);
    }
    else
    {
        printf("%d The number is Even " , iValue1);
    }

    return 0;
}
