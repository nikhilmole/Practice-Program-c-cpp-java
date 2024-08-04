#include<iostream>
using namespace std;
class Demo
{
    private:
    int static x;
    public:
    Demo()
    {
        cout<<"inside Demo constructor\n";
    }
    void Fun()
    {
        cout<<"inside static Fun\n";
        cout<<x<<"\n";
    }
};
int Demo :: x = 11;
int main()
{
    Demo dobj;
    dobj.Fun();


    return 0;
}
