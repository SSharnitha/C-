#include<iostream>
using namespace std;
class num
{
        int x;

    public:
        void get()
        {
            cout<<"Enter the two value:";
            cin>>x;
        }
        void operator-()
        {
            x=-x;
            cout<<x;
        }
        void operator*(num &s2)
        {
            cout<<(x*s2.x);
        }

};
int main()
{
    num s1;
    num s2;
    s1.get();
    s2.get();
    s1*s2;
    -s1;
    return 0;
}
