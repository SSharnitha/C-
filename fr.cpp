#include<iostream>
using namespace std;
int main()
{
    char ch;
    int a,b,c,d,sm,s;
    cout<<"Enter the 1st frac:";
    cin>>a>>ch>>b;
    cout<<"\nEnter the 2nd frac:";
    cin>>c>>ch>>d;
    sm=((a*d)+(b*c));
    s=b*d;
    cout<<"\nSum is:"<<sm<<ch<<s;
    return 0;
}
