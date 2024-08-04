#include<stdio.h>
struct Demo
{
    int no;
    float f;
    double d;
};
int main()
{ 
    struct Demo dobj;
    dobj.no = 21;
    dobj.f = 90.96;
    dobj.d = 90.999;

    printf("%d\n",dobj.no);
    printf("%f\n",dobj.f);
    printf("%f\n",dobj.d);



    return 0;
}