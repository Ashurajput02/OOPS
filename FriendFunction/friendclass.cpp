#include <iostream>
using namespace std;
class num
{
    int a = 4;
    int b = 5;

public:
    int kkr = 4;
    static int sum;
    static int mult;
    friend class calc;
};

int num::sum = 0;

int num::mult = 0;
class calc
{

public:
    num add(num a)
    {
        num a3;
        a3.sum = a.a + a.b;
        cout << "the value of public variable kkr of class using friend class ka ADD FXN=" << a.kkr << endl;
        return a3;
    }
    num multiply(num a)
    {
        num a3;
        a3.mult = (a.a) * (a.b);
        return a3;
    }
};

int main()
{
    num a1, a2, a3;
    calc a;
    a2 = a.add(a1);
    a3 = a.multiply(a1);
    cout << "the sum = " << a3.sum << endl;
    cout << "the multplication is =" << a2.mult << endl;
}