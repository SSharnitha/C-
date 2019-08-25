#include<iostream>
#include<math.h>
using namespace std;
void div(double a,double b)
{
    try
    {
        if(b==0)
            throw 0;
        double c;
        c=(a/b);
        cout<<"\nThe division of two nos is:"<<c;
    }
    catch(int)
    {
        cout<<"\n Divide by zero error has occured";
    }
}
int main()
{
    double a,b;
    try
    {
        cout<<"Enter two double values:";
        cin>>a>>b;
        if(round(a)==a||round(b)==b)
        {
            throw(a,b);
        }
        div(a,b);
    }
    catch(...)
    {
        cout<<"\nDatatype mismatch";
    }
    return 0;
}
