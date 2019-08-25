#include<iostream>
using namespace std;

int main()
{
    int r,s,temp;

    cout<<"enter the nums:";
    cin>>r>>s;

    temp=r;
    r=s;
    s=temp;

    cout<<"the swaped nums are:"<<r<<"\t"<<s;

    return 0;
}


