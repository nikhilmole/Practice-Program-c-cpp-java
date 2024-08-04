#include<stdio.h>
struct Outer
{
    int no;
    float f;
    struct Inner
    {
        int i;
        int j;
    }iobj1,iobj2;
    int k;
}oobj;
int main()
{
    oobj.no = 23;
    oobj.f = 90.999;
    oobj.k = 145;
    oobj.iobj1.i = 45;
    oobj.iobj1.j = 75;
    oobj.iobj2.i = 46;
    oobj.iobj2.j = 73;

    printf("%d\n",oobj.no);
    printf("%f\n",oobj.f);
    printf("%d\n",oobj.k);
    printf("%d\n",oobj.iobj1.i);
    printf("%d\n",oobj.iobj1.j);
    printf("%d\n",oobj.iobj2.i);
    printf("%d\n",oobj.iobj2.j);
    return 0;
}