#include<stdio.h>
struct Demo
{
    int i ;
    float f;
    double d;
    struct Demo dobj;
};

int main()
{
    dobj.i = 44;
    dobj.f = 21;
    dobj.d = 15;
    printf("%d\n",dobj.i);
    printf("%f\n",dobj.f);

    return 0;
}