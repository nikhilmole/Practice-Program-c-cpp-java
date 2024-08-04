#include<stdio.h>
#include<stdbool.h>
// Check range in 20 to 60 
bool CheckRange(int No1)
{
    if(((No1 >= 20)) && (No1 <= 60))
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
    int iValue = 0;
    bool bRet = false;
    printf("Please enter number :\n");
    scanf("%d", &iValue);

    bRet = CheckRange(iValue);

    if(bRet == true)
    {
        printf("%d The number is in range \n", iValue);
    }
    else
    {
        printf("%d The number is not in range\n", iValue);
    }

    return 0;
}