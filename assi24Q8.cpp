#include<iostream>
using namespace std;
class Demo
{
    public:
    int i;
    int j;
    virtual void Fun()
    {
        cout<<"inside Demo fun\n";
    }
};
class Derived : public Demo
{
    public:
    int k;
    int y;
    void Fun()
    {
        cout<<"inside Derived Fun\n";
    }

};
int mai()
{
    Derived dobj;
    Demo *bp = &dobj;
    bp->Fun();
    return 0;
}