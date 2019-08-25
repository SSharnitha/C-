#include<iostream>
using namespace std;
int main()
{
    int po,sh,pen;
    float sum;
    cout<<"Enter the pound shiling and pence:";
    cin>>po>>sh>>pen;
    po=240*po;
    sh=12*sh;
    sum=po+sh+pen;
    sum/=240;
    cout<<"\nDecimal pounds:"<<sum;
    return 0;
}
