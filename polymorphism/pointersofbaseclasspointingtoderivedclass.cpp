#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a = 5;

    void display()
    {
        cout << "hey buddy I am getting printed from base class " << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "hey babe! i am printed from derived class " << (a + 2) << endl;
    }
    void kanak()
    {
        cout << "hey bud its me ash" << endl;
    }
};
int main()
{
    A *ptr;
    A obj1;
    B obj2;
    ptr = &obj2;
    ptr->display();
    B *ptr2;
    ptr2 = &obj2;
    cout << ptr->a << endl;
    cout << ptr2->a << endl;
    ptr2->display();
    (*ptr2).A::display();
    (*ptr2).kanak();
    return 0;
}
