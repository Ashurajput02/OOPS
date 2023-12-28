#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void setdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showdata()
    {
        cout << "the value of a=" << a << " the value of b=" << b << endl;
    }
    void ashbabe();

    complex operator++()
    {
        complex temp;
        temp.a = ++a;
        temp.b = ++b;
        return temp;
    }

    complex operator--()
    {
        complex temp;
        temp.a = --a;
        temp.b = --b;
        return temp;
    }
    complex operator++(int)
    {

        complex temp;
        temp.a = this->a;
        temp.b = this->b;
        a += 1;
        b += 1;
        return temp;
    }
};

void complex::ashbabe()
{
}

int main()
{

    cout << "after using post increment operator:" << endl;
    complex c1, c2;
    c1.setdata(2, 3);
    c2 = c1++;
    cout << " c2 = ";
    c2.showdata();
    cout << endl
         << " c1= ";
    c1.showdata();
}