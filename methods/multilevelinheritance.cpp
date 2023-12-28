#include <iostream>
using namespace std;
class a
{
public:
    int h(int x)
    {
        cout << "hey there tesla" << endl;
    }
};

class b : public a
{
public:
    int h()
    {
        cout << "welcome to the world of " << endl;
    }
};

class c : public b
{
public:
    int h()
    {
        cout << "AshBabe" << endl;
    }
};

int main()
{
    c obj1;
    obj1.h();
}