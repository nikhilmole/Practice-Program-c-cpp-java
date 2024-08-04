#include<stdio.h>

int main()
{ 
    int no1;
    int no2;

    printf("Enter First No\n");
    scanf("%d",&no1);

    printf("Enter Second No\n");
    scanf("%d",&no2);

    if (no1 > no2)
    {
        printf("%d is maximum",no1);
    
    }
    else
    {
        printf("%d is maximum",no2);
    }
    return 0;
}