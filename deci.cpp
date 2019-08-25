#include<iostream>
using namespace std;

int main()
{
    int n,rem[50],i=0;

    cout<<"enter the num:";
    cin>>n;

    while(n!=1)
    {
        if(n%2==0)
             rem[i]=0;
        else
             rem[i]=1;
        i++;
    }
    i=i-1;
    cout<<"the bin num are:";
    for(;i>=0;i--)
        cout<<rem[i];
    cout<<1;
    return 0;
}



