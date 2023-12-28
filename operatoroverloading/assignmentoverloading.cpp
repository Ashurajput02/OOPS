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
    complex operator=(complex a)
    {

        cout << "hello" << endl;
        this->a = -a.a;
        this->b = -a.b;
        return *this;
    }
    void showdata()
    {
        cout << this->a << "+" << this->b << endl;
    }
};
int main()
{
    complex<float, float> a(2, 2);
    complex<float, float> b = a;
    b.showdata();
}