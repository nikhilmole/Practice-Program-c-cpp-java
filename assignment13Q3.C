#include<stdio.h>
struct Outer
{
    int no;
    float f;
    struct Inner
    {
        int i;
        int j;
    }iobj;
}oobj;
int main()
{
 
    oobj.no = 11;
    oobj.f = 21;
    oobj.iobj.i = 34;
    oobj.iobj.j = 23;

    printf("%d\n",oobj.no);
    printf("%f\n",oobj.f);
    printf("%d\n",oobj.iobj.i);
    printf("%d\n",oobj.iobj.j);


    return 0;
}