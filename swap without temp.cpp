#include<iostream>
using namespace std;

int main()
{
  int x,y;
  cout<<"Enter the nos:";
  cin>>x>>y;
  x = x + y;
  y = x - y;
  x = x - y;
  cout<<"\nAfter Swapping:\n"<<x<<" and "<<y;
  return 0;
}
