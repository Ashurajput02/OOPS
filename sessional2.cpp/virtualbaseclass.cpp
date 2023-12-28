#include <iostream>
using namespace std;
class j
{
public:
    int a = 4;
};

class b : public virtual j
{
public:
    b(int k)
    {
        a = 7;
    }
};

class c : virtual public j
{
};

int main()
{

    b obj(2);
    cout << obj.a << endl;
    c obj2;
    cout << obj2.a << endl;
}