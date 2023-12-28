#include <iostream>
using namespace std;
class ash
{
public:
    void f1(int x)
    {
        cout << "hey there" << endl;
    }
};

class jignesh : public ash
{
public:
    void f1(int x, int y)
    {
        cout << "hola" << endl;
    }
};

int main()
{
    jignesh obj;
    obj.f1(3);
}