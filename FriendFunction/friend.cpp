#include <iostream>
using namespace std;
class ash
{

    int x, y;
    static int u;

public:
    ash(int x, int y)
    {
        this->x = x;
        this->y = y;
        u = 9;
    }
    friend void babe(ash);
};
void babe(ash x)
{
    cout << "The value of x is " << x.x << endl;
    cout << "the value of static variable=" << x.u << endl;
}
int ash::u = 0;
int main()
{
    ash a(10, 20);
    babe(a);
}