#include<iostream>
using namespace std;
int main()
{
    int i,no,f=0,s=1,n;
    cout<<"Enter num of terms for Series:";
    cin>>no;
    cout<<"Fibonacci series are:";
    for(i=0; i<no; i++)
    {
        cout<<"\n"<<f;
        n=f+s;
        f=s;
        s=n;
    }
    return 0;
}
