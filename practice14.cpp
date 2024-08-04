#include<iostream>
using namespace std;
CheckEven( int No1)
{
    if ((No1 % 2 == 0) && (No1 % 5 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
} 
int main()
{
    int Num = 0;
    bool bRet = false;
    cout<<"Enter Your Number\n";
    cin>>Num;
    
    bRet = CheckEven(Num);
    if (bRet == true)
    {
        cout<<"Number is Even\n";
    }
    else
    {
        cout<<"Number is Odd";
    }

    return 0;
}