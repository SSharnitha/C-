#include<iostream>
using namespace std;
class student
{
    protected:
        int roll;
        char name[50];
    public:
        void getval1()
        {
            cin>>name>>roll;
        }
        void put1()
        {
            cout<<"\nName="<<name<<"\tRoll="<<roll;
        }

};
class test:virtual public student
{
    protected:
        int mark;
    public:
         void getval2()
        {
            cin>>mark;
        }
        void put2()
        {
            cout<<"\tMark="<<mark;
        }
};
class sports:public virtual student
{
    protected:
        int score;
    public:
        void getval3()
        {
            cin>>score;
        }
        void put3()
        {
            cout<<"\tScore="<<score;
        }
};
class result:public test,public sports
{
    protected:
        int tot;
    public:
        void get4()
        {
            cout<<"Enter name roll mark and score:";
            getval1();
            getval2();
            getval3();
        }
        void put4()
        {
            tot=mark+score;
            put1();
            put2();
            put3();
            cout<<"\nResult="<<tot;
        }


};
int main()
{
    /*No I'm not going to lose feelings.No I'm not going to find someone better.No I'm not going to cheat on u.And no I'm not going to leave u.I've already made up my mind
    I want you and only you.No one else... becoz to me your my kind of perfect.
    Never give up on something that you can't go a day without thinking about*/
    result s;
    s.get4();
    s.put4();
    return 0;
}
