#include<stdio.h>
int Substraction(int no1,int no2)
{
int Ans = 0;
Ans = no1 - no2;
return Ans;
}
int main()
{
    int pica = 10;
    int chupi = 20;
    int yed = 0;

    printf("My name is nikhil\n");

    yed = Substraction(pica,chupi);

    printf("Addition is %d\n",yed);

    return 0;
}