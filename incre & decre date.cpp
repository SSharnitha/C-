#include<iostream>
using namespace std;

class date
{
    int d,m,y;
    public:
        void getvalue()
        {
            cin>>d>>m>>y;
        }
        date(){};
        date(date &da)
        {
            d=da.d;
            m=da.m;
            y=da.y;
        }
        void operator++();
        void operator--();
        int valid();
};
int date::valid()
{
    if((d<=31&&m==1)||(d<=31&&m==3)||(d<=31&&m==5)||(d<=31&&m==7)||(d<=31&&m==8)||(d<=31&&m==10)||(d<=31&&m==12)||(d<=30&&m==4)||(d<=30&&m==6)||(d<=30&&m==9)||(d<=30&&m==11)
       ||((y%4==0)&&d<=29&&m==2)||(d<=28&&m==2&&(y%4!=0)))
        return 1;
    else
        return 0;
}
void date::operator++()
{
    if(d==31&&m!=12)
    {
        d=1;
        m++;
    }
    else if(d==31&&m==12)
    {
        d=1;
        m=1;
        y++;
    }
    else if(d==30&&((m==4)||(m==6)||(m==9)||(m==11)))
    {
        d=1;
        m++;
    }
    else if(y%4==0&&d==29&&m==2)
    {
        d=1;
        m++;
    }
    else if(y%4!=0&&d==28&&m==2)
    {
        d=1;
        m++;
    }
    else
    {
        d++;
    }
    cout<<"\nThe next day is:"<<d<<"."<<m<<"."<<y;
}
void date::operator--()
{
    if(d==1&&m==1)
    {
        d=31;
        m=12;
        y--;
    }
    else if(d==1&&((m==4)||(m==6)||(m==9)||(m==11)||(m==2)))
    {
        d=31;m--;
    }
    else if(d==1&&((m==5)||(m==7)||(m==8)||(m==10)||(m==12)))
    {
        d=30;
        m--;
    }
    else if(d==1&&m==3&&(y%4==0))
    {
        d=29;
        m--;
    }
    else if(d==1&&m==3&&(y%4!=0))
    {
        d=28;m--;
    }
    else
        d--;
    cout<<"\nThe previous day is:"<<d<<"."<<m<<"."<<y;
}
int main()
{
    int c;
    date da;

    cout<<"\nEnter the date:";
    da.getvalue();
    date dt=da;

    c=da.valid();

    if(c==1)
    {
        ++da;
        --dt;
    }

    return 0;
}
