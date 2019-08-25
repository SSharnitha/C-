#include<iostream>
using namespace std;
int main()
{
    int a,i=0,n[44];
    cout<<"enter the number";
    cin>>a;
    do
    {
        n[i]=a%2;
        a=a/2;
        i++;
    }while(a>1);
    n[i]=1;
    cout<<"The binary form is";
    do
    {
        cout<<n[i];
        i--;
    }while(i>=0);
    return 0;
}
