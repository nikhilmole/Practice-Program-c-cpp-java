#include<iostream>
using namespace std;

class Assignment
{
    private:
    int Q;
    public:
    Assignment()
    {
        cout<<"Inside constructor\n";
         Q = 10;
    }
    void Assi()
    {
        cout<<"Inside Void Assi\n";
        cout<<Q<<"\n";
    }
};    
int main()
{
    Assignment aobj;
    aobj.Assi();
    return 0;
}