#include<iostream>
using namespace std;
class person
{
    public:
        int code;
        char name[50];

};
class account:virtual public person
{
    public://name code
        int pay;
};
class admin:public virtual person
{
    public://name code
        int experience;
};
class master:public account,public admin
{
    public:
        void getvalue()
        {
            cout<<"Enter the name,code,pay,experience:";
            cin>>name>>code>>pay>>experience;
        }
        void dis()
        {
            cout<<"The details are:"<<name<<code<<pay<<experience;
        }
};
int main()
{
    master x;
    x.getvalue();
    x.dis();
}
