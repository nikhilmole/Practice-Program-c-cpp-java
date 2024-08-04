#include<iostream>
using namespace std;
class hello
{   public:
    virtual void Fun();
};
void virtual hello::Fun()
{
    cout<<"Inside Virtual Fun";
}
int main()
{
    hello hobj;
    hobj.Fun();
    return 0;
}