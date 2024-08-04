#include<stdio.h>
void Table()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 10; iCnt++)
    printf("%d * 2 = %d\n",iCnt,iCnt *  2);
}
int main()
{
   // int iValue = 0;
    //printf("Enter the number which table u want to display :");
    //scanf("%d\n", &iValue);

    Table();

    return 0;
}