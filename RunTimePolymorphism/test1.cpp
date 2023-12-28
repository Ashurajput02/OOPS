#include <iostream>
using namespace std;
class ash
{
public:
    void f1()
    {
        cout << "jai shree ram" << endl;
    }
};
class jig : public ash
{
public:
    void f1()
    {
        cout << "ram ram bhai saariya ne" << endl;
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

    return 0;
}