
#include <iostream>
using namespace std;
class ashu
{
    int a, b;
    static int alexa;
    friend ashu sum(ashu a1, ashu a2);

public:
    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void printer()
    {
        cout << a << " + " << b << "j" << endl;
        cout << "the value of alexa=" << alexa << endl;
    }
};
int ashu::alexa = 0;

ashu sum(ashu a1, ashu a2)
{
    ashu a3;
    a3.set((a1.a + a2.a), (a1.b + a2.b));

    a1.printer();
    ashu::alexa = 8;
    return (a3);
}

int main()
{

    ashu a1, a2, a3;
    a1.set(4, 5);
    a2.set(5, 4);
    a3 = sum(a1, a2);
    a3.printer();
    // cout << a3.alexa << endl;

    // cout << "Calling by direct class= " << ashu::alexa << endl;
}
