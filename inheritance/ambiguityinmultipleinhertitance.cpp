#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "hey buddy i am class A" << endl;
    }
};

class B
{
public:
    void display()
    {
        cout << "hey buddy i am class B" << endl;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        cout << "hey buddy i am class C" << endl;
    }
};

int main()
{
    C obj;
    obj.A::display(); // class display function of class A
    obj.display();    // calls the display function of uss class ka jiska yeh object hai;
    return 0;
    /*what if we dont create display function in C and then call the display function using object of class C.
    then it will show ambiguity*/
}
