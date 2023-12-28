#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class ashu
{
public:
    int a;
};

class Prime
{
public:
    int n;
    Prime()
    {
        n = 0;
    }
    void input(int x)
    {
        n = x;
    }
    void display()
    {

        int count = 0;
        int k = n;
        while (k >= n)
        {
            if (n % k == 0)
                count++;
            k--;
        }
        if (count == 2)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
};

int main()
{
    Prime obj1;
    obj1.input(5);
    ashu obj2;
    obj2.a = obj1.n;
    cout << "address of ashu's object obj2=" << &(obj2.a) << endl;
    cout << "address of Prime's object obj1=" << &(obj1.n) << endl;
    Prime obj3 = obj1; // copy constructor is invoked

    cout << "address of obj3 of Prime=" << &(obj3.n) << endl;

    return 1;
}