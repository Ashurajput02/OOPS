#include <iostream>
using namespace std;
class ash
{
public:
    int ab;
    static int count;
    void fun()
    {

        static int x = 7;

        cout << "the value of x is=" << x << endl;
        x += 1;
    }
    void show()
    {
    }
};

int ash::count = 8;

int main()
{
    ash b;
    b.fun();
    b.fun();
    cout << "the value of count is =" << b.count << endl;
    cout << sizeof(b) << endl;
}