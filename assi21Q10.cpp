#include<iostream>
using namespace std;
class Base
{
    public:
    int i,j;
    static int k;
    Base()
    {
        cout<<"Inside Base Constructor\n";
        i = 10;
        j = 20;
    }
    void fun()
    {
        cout<<"Base Fun\n";
    }
};
int Base::k=11;
class Derived : public Base
{
    public:
    int x,y;
    Derived()
    {
        cout<<"Inside Derived Constructor\n";
        x = 50;
        y = 60;
    }
    void Gun()
    {
        cout<<"Derived Gun\n";
    }
};
int main()
{
    Base bobj;
    Derived dobj;
    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj)<<"\n";

    cout<<bobj.i<<"\n";
    cout<<bobj.i<<"\n";
    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<bobj.k<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.k<<"\n";

    bobj.fun();
    dobj.fun();
    dobj.Gun();

    return 0;
}