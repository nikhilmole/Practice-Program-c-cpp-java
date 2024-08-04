#include<stdio.h>

struct Nik
{
    int i;
    float f;
    double d;

};
int main ()
{
    

    struct Nik mobj;
    struct Nik *p = &mobj;

    mobj->i = 77;
    mobj->f = 90.99;
    mobj->d = 90.9999;

    printf("%d\n",mobj->i);
    printf("%f\n",mobj->f);
    printf("%f\n",mobj->d);
    printf("%d\n",sizeof(mobj));


    return 0;

}