#include <iostream>
using namespace std;
class ash
{
public:
    virtual void f1()
    {
        cout << "jai shree ram" << endl;
    }
    virtual void babe()
    {
        cout << "You r mine" << endl;
    }
    virtual void kanak()
    {
        cout << "har har mahadev" << endl;
    }
};
class jig : public ash
{
public:
    void f1()
    {
        cout << "ram ram bhai saariya ne" << endl;
    }
    void babe()
    {
        cout << "WELCOME to the world of ASH" << endl;
    }
    void kanak(int x) // method hiding
    {
        cout << "the efforts you provided=" << x << endl;
    }
};
int main()
{

    jig *a;
    jig ob1;
    a = &ob1; // early binding
    a->f1();

    ash *b;
    jig ob2;
    b = &ob2;
    b->f1(); // late binding

    ash *a;
    jig obj1;
    a = &obj1;
    a->f1();   // jig ke f1 se
    a->babe(); // jig wala babe print hoga
               // a->kanak(); // ash wala call hoga
    // a->kanak();
    jig *b;
    b = &obj1;
    // b->kanak();
    b->kanak();

    return 0;
}