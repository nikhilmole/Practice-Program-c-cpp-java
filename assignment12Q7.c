#include<stdio.h>
#pragma pack(1)
struct hello
{
    int arr[3];
    float f;
    char ch;
    double d;
};

int main()

{
    struct hello hobj;
    printf("size of hobj is %d\n",sizeof(hobj));
    return 0;
}