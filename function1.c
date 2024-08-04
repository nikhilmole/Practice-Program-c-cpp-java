#include<stdio.h>

void Gun()
{
    printf("Inside Gun\n");
}
int main()
{
    int No1 = 11;
    int No2 = 21;

    printf("Inside Main\n");
    printf("%d\n",No1);
    printf("%d\n",No2);
    Gun();
    printf("End of Main\n");

    return 0;
}