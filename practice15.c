#include<stdio.h>
struct Demo
{
    int iNo;
    float fNo1;
    double dNo12;
};
int main()
{
    struct Demo dobj;
    dobj.iNo = 11;
    dobj.fNo1 = 21.0152f;
    dobj.dNo12 = 31.01564f;
  
    printf("%d\n",dobj.iNo);
    printf("%f\n",dobj.fNo1);
    printf("%f\n",dobj.dNo12);

    return 0;
}