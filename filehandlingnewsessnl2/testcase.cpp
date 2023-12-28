#include <iostream>
using namespace std;
class ashu
{
    int a;

public:
    ashu(int x)
    {
        a = x;
    }
    ashu operator=(ashu o)
    {
        ashu c(0);
        c.a = -o.a;
        return c;
    }
    void showdata()
    {
        cout << a << endl;
    }
};

int main()
{

    ashu a(0), c(5);
    a = c;
    a.showdata();
}
