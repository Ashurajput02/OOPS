#include <iostream>
using namespace std;
class alpha
{

    //   int *_vptr;
public:
    int jigg;

public:
    virtual void rajputana()
    {
    }
};
int main()
{
    alpha ob1;
    cout << sizeof(ob1.jigg) << endl;
    cout << (&ob1) << "    " << &ob1.jigg << endl;
}