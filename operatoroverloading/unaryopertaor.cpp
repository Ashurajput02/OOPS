#include <iostream>
using namespace std;
class ashu
{
    int a;

public:
    void setdata(int x)
    {
        this->a = x;
    }
    ashu operator+()
    {
        cout << "+ operator overloading" << endl;
        ashu ob;
        ob.a = a;
        return ob;
    }

    ashu operator-()
    {
        cout << "- operator overloading" << endl;
        ashu ob;
        ob.a = -a;
        return ob;
    }
    void showdata()
    {
        cout << "the value=" << a << endl;
    }

    ashu operator++()
    {
        ashu temp;
        // this->a = a + 1;
        // temp.a = a;
        temp.a = ++a;
        return temp;
    }

    ashu operator++(int) // post increment
    {
        ashu temp;
        // temp.a = a;
        // this->a = a + 1;
        temp.a = a++;
        return temp;
    }
};

int main()
{
    ashu c1, c2;
    c1.setdata(5);
    c2 = +c1; // c1.operator+();
    c2.showdata();
    ashu c3;
    c3 = -c1; // c1.operator-();
    c3.showdata();

    ashu c4, c5;
    c4.setdata(5);
    c4.showdata();
    c5 = c4++;
    cout << "the value for c4=";
    c4.showdata();
    cout << endl;

    cout << "the value for c5=";
    c5.showdata();
    cout << endl;
    return 0;
}