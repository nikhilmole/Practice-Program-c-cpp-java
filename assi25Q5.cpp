#include<iostream>
using namespace std;
class Base
{
    public:
    int i ;
    float j ;
    virtual void gun () = 0;
    virtual void sun() = 0;
    virtual void run()
    { 
        cout<<"Base run\n";
    }
};
class Derived : public Base
{
    public:
    int k;
    double l;

    void sun()
    {
        cout<<"Derived sun\n";
    }
    void fun()
    {
        cout<<"Derived fun\n";
    }
    void gun()
    {
        cout<<"derived gun\n";
    }
    virtual void mun ()
    {
        cout<<"Derived mun\n";

    }
};
int main()
{
    Base *bp = NULL;
    Derived dobj;
    bp = &dobj;

   // bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
   // bp->mun();
    return 0;

}