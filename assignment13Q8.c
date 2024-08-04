#include<stdio.h>
struct Outer
{
    int arr[3];
    float f;
    int k;
};
int main()
{
    struct Outer oobj;
    oobj.arr[0] = 4;
    oobj.arr[1] = 5;

    printf("%d\n",oobj.arr[0]);

    return 0;
}
