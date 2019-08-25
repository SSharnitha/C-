#include<iostream>
using namespace std;
template<class T>
void add(T a ,T b)
{
    cout<<"\nThe addition of two num is:"<<(a+b);
}

template<class T>
void mul(T a,T b)
{
    cout<<"\nThe multiplication of two num is:"<<(a*b);
}

template<class T>
void div(T a,T b)
{
    cout<<"\nThe division of two num is:"<<(a/b);
}

int main()
{
    int a,b,ch;
    cout<<"\nEnter two real nos:";
    cin>>a>>b;
    cout<<"\nEnter either 1 2 or 3:";
    cin>>ch;
    switch(ch)
    {
        case 1:
            add(a,b);
            break;
        case 2:
            mul(a,b);
            break;
        case 3:
            div(a,b);
            break;
        default:
            cout<<"\nEnter either 1 2 or 3";
    }
    return 0;
}
