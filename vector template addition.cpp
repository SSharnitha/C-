#include<iostream>
using namespace std;
template<typename T>
class vector
{

};

int main()
{
    Vector<int> a(5);
    Vector<int> b(5);

    for (int i = 0; i < 5; i++) {
        a[i] = i;
        b[i] = i+5;
    }

    Vector<int> c = a + b;     // using copy constructor

    cout << "Vector<int>:" << endl
         << "a=" << a << endl
         << "b=" << b << endl
         << "c=" << c << endl;

    cout << endl;

    Vector<double> x(5);
    Vector<double> y(5);

    for (int i = 0; i < 5; i++) {
        x[i] = i/10.0;
        y[i] = (i+5)/10.0;
    }

    Vector<double> z = x + y;  // using copy constructor

    cout << "Vector<double>:" << endl
         << "x=" << x << endl
         << "y=" << y << endl
         << "z=" << z << endl;
