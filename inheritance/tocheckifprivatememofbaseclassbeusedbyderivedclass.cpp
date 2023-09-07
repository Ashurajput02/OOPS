#include <iostream>
using namespace std;
class dad
{
public:
    int a;

private:
    int b;

protected:
    int c = 5;
};

class son : private dad
{

public:
    void show()
    {
        cout << "the value of c is " << c << endl;
    }
};

class son2 : public son
{
    void show()
    {
        cout << "hola,, the value of a is =" << a << endl; // a became private for class son and thus inaccessible for son2
    }
};
int main()
{
    son a1;
    a1.show();
}