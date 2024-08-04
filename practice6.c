#include<stdio.h>
int Addition(int no1,int no2,int no3,int no4)
{
    int Ans = 0;
    Ans = no1 + no2 * no3 + no4;

    return Ans; 
}



int main()
{
    int lol = 78;
    int tilu = 96;
    int tinka = 45;
    int mom = 12;
    int nik = 0;

    printf("My name is nikhil\n");

    nik = Addition(lol,tilu,tinka,mom);

    printf("The ans is %d\n",nik);

    return 0;
}

