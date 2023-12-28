#include <iostream>
using namespace std;

class ash
{
public:
    void f1()
    {
        cout << "hey there i am classs ash" << endl;
    }
    virtual void f2(int c)
    {

        cout << "hey there i am class ash using method overriding" << endl;
    }
};
class jig : public ash
{
public:
    void f1(int x)
    {
        cout << "hey there i m class jig" << endl;

    } // method hiding in c++

    void f2(int a)
    {
        cout << "hey there i am classs jig using method overriding" << endl;
    }
};
int main()
{

    jig obj;
    obj.f1(4);
    obj.f2(5); // this will call jig class ka f2 function
    ash *obj2;
    jig obj3;
    obj2 = &obj3;
    obj2->f2(5); // late binding

    return 0;
}