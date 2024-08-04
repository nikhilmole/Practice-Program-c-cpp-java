#include<stdio.h>
struct outer 
{
    int no;
    float f;
    struct Inner
    {
        int i;
        int j;
    }iobj;
    int k;      
};
int main()
{
    struct outer oobj;
    oobj.no = 11;
    oobj.f = 90.999;
    oobj.k = 34;
    oobj.iobj.i = 34;
    oobj.iobj.j = 43;

    printf("%d\n",oobj.no);
    printf("%f\n",oobj.f);
    printf("%d\n",oobj.k);
    printf("%d\n",oobj.iobj.i);
    printf("%d\n",oobj.iobj.j);
    return 0;
}