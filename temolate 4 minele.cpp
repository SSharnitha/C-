#include<iostream>
using namespace std;
template<typename T>
class array
{
  T a[15];
  int n,min;
  public:
    void getvalue()
    {
      cout<<"Enter no of values:";
      cin>>n;
      cout<<"Enter the values:";
      for(int i=0;i<n;i++)
        cin>>a[i];
    }
    T minimum()
    {
      min=a[0];
      for(int i=0;i<n;i++)
      {
        min=(min<a[i])?min:a[i];
      }
      return min;
    }
    void display(T a)
    {
      cout<<a;
      T mi=minimum();
      cout<<"The minimum ele is:"<<mi;
    }
};

int main()
{
  array<int> a;
  a.getvalue();
  a.display(5);
}

