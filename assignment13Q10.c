#include<stdio.h>
struct Demo
{
    int no;
    Demo *next;
};
int main()
{
    struct Demo obj1,obj2,obj3,obj4;
    obj1.no = 11;
    obj2.no = 21;
    obj3.no = 51;
    obj4.no = 101;

    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = NULL;

    printf("%d\n",obj1.no);
    printf("%d\n",obj1.next->no);
    printf("%d\n",obj1.next->no->no);

    return 0;
}