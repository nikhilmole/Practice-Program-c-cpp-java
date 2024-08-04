#include<stdio.h>

int main()

{
    int standard = 0;
    printf("Enter Your Standard :");
    scanf("%d",&standard);
    switch (standard)
    {
        case 1:
        printf("your exam at 7 Am\n");
        break;
        case 2:
        printf("your exam at 8 Am\n");
        break;
        case 3:
        printf("your exam at 9 Am\n");
        break;
        default:
        printf("wrong choise");
    }
    return 0;
}