#include<iostream>
using namespace std;
class base1
{
    public:
    int i;
    float f;

    virtual void gun() = 0;
    virtual void sun()= 0;
    virtual void run
    {
        cout<<"base 1 run\n";
    }
};
class base2
{
    public:
    int j;
    float g;
    virtual void mun() = 0;
    virtual void fun() = 0;
     void fun()
    {
        cout<<"Base 2 fun \n";
    }
};
class derived : public base1 ,base2
{
    public:
    int i;
    double d;
    void sun()
    {
        cout<<"derived sun\n";
    }
    void fun()
    {
        cout<<"derived fun\n";
    }
    void gun()
    {
        cout<<"derived gun\n";
    }
    void mun()
    {
        cout<<"derived mun\n";
    }
}
int main()
{
    base1 *bp = new derived;
    bp->gun(); 
    bp->sun(); 
    bp->run(); 
    return 0;
}