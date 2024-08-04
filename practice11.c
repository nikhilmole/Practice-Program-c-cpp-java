/*          Algorithm
    START
    Accept Number As No1
    The No1 is divisisible by 3 & 5
    Then the number is even
    If it is not 
    print the number is not divisible
*/
#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////////////////
/// Function name : CheckDivisible 
/// Discription : Check Divisible or Not  
/// Input : Integer 
/// Output : Integer 
/// Author Name : Nikhil Yuvarj Mole
/// Date : 17/4/24
////////////////////////////////////////////////////////////////////////////////// 
bool CheckDivisible (unsigned int No1)
{
    if(((No1 % 3) == 0) && ((No1 % 5) == 0))
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
    unsigned int ivalue1 = 0;
    bool bRet = false;

    printf("Enter the number :");
    scanf("%d",&ivalue1);

    bRet = CheckDivisible(ivalue1);

    if(bRet == true)
    {
        printf("%d The number is divided by 3 & 5 ",ivalue1);
    }
    else
    {
        printf("%d The number is not divisible by 3&5", ivalue1);
    }

    return 0;
}