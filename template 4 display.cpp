#include<iostream>
using namespace std;
template<typename t>
void display(t a)
{
    cout<<"\n"<<a;
}
template<typename t>
void display(t a,t b)
{
    cout<<"\n"<<a<<b;
}
int main()
{
    display(5);
    display(10.90);
    display('c');
    display(5,9);
    display(10.90,70.4000000000001);
    display("sharni");
    return 0;
}
