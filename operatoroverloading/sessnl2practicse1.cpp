#include <iostream>
using namespace std;
template <class X, class Y>
class complex
{
    X a, b;

public:
    complex(X a, Y b)
    {
        this->a = a;
        this->b = b;
    }

    complex operator+(complex b)
    {
        complex c(0, 0);
        c.a = this->a + b.a;
        c.b = this->b + b.b;
        return c;
    }
    void showdata()
    {
        cout << this->a << "+" << this->b << "j" << endl;
    }
    complex operator*(int b)
    {
        complex<float, float> c(0, 0);
        c.a = this->a * b;
        c.b = this->b * b;
        return c;
    }
    complex operator/(complex b)
    {
        complex<float, float> c(0, 0);
        c.a = this->a / b.a;
        c.b = this->b / b.b;
        return c;
    }
    complex operator=(complex b)
    {
        cout << "hello" << endl;

        this->a = 0 - b.a;
        this->b = 0 - b.b;
        return *this;
    }
    bool operator==(complex b)
    {
        if (this->a == b.a)
            return true;
        else
            return false;
    }
};

int main()
{
    complex<float, float> a(9, 16);
    complex<float, float> b(3, 4);
    complex<float, float> c = a + b;
    // c.showdata();
    // a.showdata();
    complex<float, float> d = a * 5;
    // d.showdata();
    complex<float, float> f = a / b * 9;
    // f.showdata();
    complex<float, float> g(0, 0);

    g = a;
    a.showdata();

    // if (g == a)
    // {
    //     cout << "happy birthday" << endl;
    // }
    // else
    //     cout << "jigyasha malyan" << endl;

    g.showdata();
}