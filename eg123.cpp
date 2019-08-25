#include<iostream>
using namespace std;

class s
{
public:
    int b;
    static int a;
    static void display()
    {
        //cout<<b;
        cout<<a;
    }
};
int s::a;
int main()
{
    s b;
    b.b=5;
    s::display();
}
