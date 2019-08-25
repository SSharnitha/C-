
#include<iostream>
using namespace std;

int main()
{
    int a,i,sum=1;
    cout<<"enter a num:";
    cin>>a;

    for(i=1;i<=a;i++)
        sum*=i;

    cout<<"the fac is:"<<sum;

    return 0;
}
