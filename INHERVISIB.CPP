#include<iostream>
using namespace std;
//multilevel inheritance with three specifiers
class record
{
    private:
        int atten=89;
    protected:
        char c='g';
    public:
        int mark=99;
        void dis()
        {
            cout<<"\nThe details are:"<<atten<<"\t"<<c<<"\t"<<mark;
        }
};
class teacher:public record
{
    /*
    protected:c
    public:mark
    */
    public:
        void dis()
        {
            c='g';
            mark=99;
            cout<<"\nCan access c as pro and mark as public";
            cout<<"\nThe details are:"<<c<<"\t"<<mark;
        }

};
class parent:protected record
{
    //protected:c,mark
    public:
        void dis()
        {
            c='g';
            mark=99;
            cout<<"\nCan access only c,mark as protected";
            cout<<"\nThe details are:"<<c<<"\t"<<mark;
        }
};
class student:private record
{
    //private:c,mark
    //even though it is private it is accessed in main by base class obj
    public:
        void dis()
        {
            c='g';
            mark=99;
            cout<<"\nCan access only c,mark private members";
            cout<<"\nThe details are:"<<c<<"\t"<<mark;
        }
};
int main()
{
    record a;
    teacher b;
    parent c;
    student d;
    cout<<a.mark;//a.attend,a.c not possible
    cout<<"\n"<<b.mark;//b.c is not possible & eventhough mark is pri of derived student it is acessed in main  by object b as it is a public member of that class
    cout<<"\n no data member of c obj and d obj is acessible";
    a.dis();
    b.dis();
    c.dis();
    d.dis();
    return 0;
}

