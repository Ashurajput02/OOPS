#include <iostream>
using namespace std;
class a
{
public:
    void h1()
    {
        cout << "Hello I am called via class a" << endl;
    }
    void h2(int x)
    {
        cout << "Hello I am called via class a and the value inside me is= " << x << endl;
    }
};

class b : public a
{
public:
    void h1()
    {
        cout << "Hello I am called via class b" << endl;
    };
    // method hiding
    void h2(int x, int y)
    {
        cout << "Hello I am called via class b and the sum of the values you provided is= " << (x + y) << endl;
    }
};
int main()
{
    b obj;
    obj.h1();     // method overriding
    obj.h2(3, 4); // will throw an error
    obj.h2(4, 5);

    return 0;
}