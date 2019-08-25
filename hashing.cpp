#include<iostream>
using namespace std;

struct hasht
{
    int key,val,j;
}hast[10];
void lin(int temp,int s)
{
    if(hast[++s].j!=1)
    {
        if(s>9)
            s=0;
        hast[s].val=temp;
        hast[s].key=s;
        hast[s].j=1;
    }
}
void lindis()
{
    cout<<"The elements are in linear hash:";
    for(int i=0;i<10;i++)
    {
        cout<<"\n"<<hast[i].key<<"\t\t"<<hast[i].val;
    }
}
int main()
{
    int s=10,n,temp;
    cout<<"Enter the no of ele:";
    cin>>n;
    cout<<"Enter the elements:";

    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(hast[temp%s].j!=0)
        {
            hast[temp%s].val=temp;
            hast[temp%s].j=1;
        }
        lin(temp,temp%s);
    }
    lindis();
    return 0;
}
