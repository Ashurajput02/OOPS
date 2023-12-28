#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class jig
{
public:
    int a;
    int b;

public:
    jig(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void fun()
    {

        cout << "Hey Buddy Welcome to the world of OOPS" << endl;
    }
};

int main()
{

    jig sim1(5, 7), sim2(6, 6);
    sim1.fun();
    sim2.fun();
    cout << "Address of a instance variable of object sim1=" << &(sim1.a) << endl;

    cout << "Address of a instance variable of object sim1=" << &(sim2.a) << endl;
    void (jig::*fptr)(void) = &jig::fun;
}
