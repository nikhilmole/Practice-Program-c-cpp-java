#include<iostream>
using namespace std;

class Base 
{
    public:
    int i;
    float f;

    void fun()
    {
        cout<<"inside base fun\n";
    }
    virtual void gun()
    {
        cout<<"Base gun\n";
    }
};
class Derived : public Base
{
    public:
    int i;
    double d;
    virtual void fun()
    {
        cout<<"derived fun\n";
    }
    void gun()
    {
        cout<<"Derived gun\n";
    }
    virtual void sun()
    {
        cout<<"Derived sun\n";
    }
};
int main()
{
    Base *bp = new Derived;
    bp->gun();
    return 0;
}