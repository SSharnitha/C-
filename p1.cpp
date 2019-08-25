#include<iostream>
using namespace std;

int main()
{
    int n,i=1;

    cout<<"Enter the num:";
    cin>>n;

    while(n>0)
    {
        n-=i;
        i+=2;
    }

    if(n==0)
    {
        cout<<"\nPerfect Square";
    }

    else
    {

        cout<<"\nNot Perfect Square";

    }
    return 0;
}
