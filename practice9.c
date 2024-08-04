#include<stdio.h>
#include<stdbool.h>
/*  Algorithm
    START
    Accept one number As no
    Devide in to 2
    If reminder is 0
    Then display the result as even Number 
    Otherwise thedisplay the result as odd number
    STOP
*/
/////////////////////////////////////////////////////////////////////////////////
//  Function Name : CheckEvenOdd
//  Declairation : Check Even Odd number
//  Input : Integer
//  Output : Integer 
//  Outher Name : Nikhil Yuvraj Mole
//  Date : 16 / 04 / 2024   
////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(unsigned int No1)
{
    if((No1 % 2) == 0)
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
    unsigned int iValue1 = 0;
    bool bRet = false;

    printf("Enter Number :");
    scanf("%d",&iValue1);

    bRet= CheckEvenOdd(iValue1);

    if(bRet == true)
    {
        printf("The number is even :");
    }

    else
    {
        printf("The number is odd :"); 
    }
    return 0;
}
