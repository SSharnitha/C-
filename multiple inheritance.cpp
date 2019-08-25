#include<iostream>
using namespace std;

class appa
{
        int a;
    protected:
        int b;
    public:
        int c;
};

class amma
{
     int d;
    protected:
        int e;
    public:
        int f;
};

class baby1:public appa,protected amma
{
    //protected:b,e,f
    //public:c
};

class baby2:private appa,protected amma
{
    //private:b,c
    //protected:e,f
};

