#include <iostream>
using namespace std;
class ash
{
    static int count;

public:
    ash()
    {
        cout << "default constructor" << endl;
    }
    void set()
    {
        count++;
        cout << "hey buddy i m objectc number" << count << endl;
    }
};

int ash::count = 0;

int main()
{
    ash a[3];
    for (int i = 0; i < 3; i++)
    {
        a[i].set();
    }
}