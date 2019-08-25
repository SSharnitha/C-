#include<iostream>
using namespace std;

class num
{
    float x;
    public:
        void get()
        {
            cout<<"enter int:";
            cin>>x;
        }
        void dis()
        {
            cout<<"\nThe value is:"<<x;
        }

        //prefix call function
        num operator++()
        {
            num temp;
            temp.x=++x;
            return temp;
        }

        //postfix call function
        num &operator++(int)
        {
            num temp;
            temp.x=x;
            x++;
            return temp;
        }
};
int main()
{
    num s,s1;
    s.get();
    s1.get();

    //prefix
    num c=++s;
    c.dis();
    s.dis();

    //postfix
    c=s1++;
    c.dis();
    s1.dis();

    return 0;
}
