#include <iostream>
using namespace std;

class A
{
protected:
    int a, b;

    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

public:
    void show1()
    {
        cout << "The Sum of a and b=" << (a + b) << endl;
    }
};
class B
{
protected:
    int c, d;
    B(int c, int d)
    {
        this->c = c;
        this->d = d;
    }

public:
    void show2()
    {
        cout << "The Sum of c and d=" << (c + d) << endl;
    }
};

class C : protected A, protected B
{
protected:
    int e, f;

public:
    C(int a, int b, int c, int d, int e, int f) : A(a, b), B(c, d)
    {
        this->e = e;
        this->f = f;
    }
    void show()
    {
        show1();
        show2();
    }
};

int main()
{
    C obj1(1, 2, 3, 4, 5, 6);
    obj1.show();
}