#include<stdio.h>

void Table()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 10; iCnt ++)
    {
        printf("%d * 2 = %d\n",iCnt,iCnt * 2); 
    }
}   


int main()
{
  

    Table();

    return 0;
}