#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class ashu
{
    int b, c;
    static int a;

public:
        int d = 8;

    void static get(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "the value of static variable a=" << a << endl;
    }
};

int ashu::a = 0;

int main()
{
    ashu a1;
    ashu::get(6);
    a1.show();

    // cout << "the value of static varibale without using object=" << ashu::a << endl;
    ashu a2;
    a2.show();

    // cout<<"the value of static varibale without using object"<<ashu::d<<endl;
}