#include <iostream>
using namespace std;

class ashu
{
public:
    virtual void f1() = 0;
};

class sigma : public ashu
{

    void f1(int x)
    {
        cout << "jigyasha malyan" << endl;
    }
};
class j
{
public:
};

class b : public virtual j
{
public:
    void fun()
    {
        cout << "hello again" << endl;
    }
};

class d : public virtual j
{
public:
    void fun()
    {
        cout << "Welcome to Google" << endl;
    }
};

class c : public b, public d
{
};

int main()
{
    ashu *obj;
    // sigma ss;//method hiding karte hai toh bhi voh class bhi abstract class hi kehlaati hai .

    /// obj=&ss;
    c obj;
    // obj.d::fun();
}