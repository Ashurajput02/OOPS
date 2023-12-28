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
A::a=9;
};
int main(){
    B b1;
    A a1;
    a1.a=65;

    cout<<b1.a<<endl;
cout<<a1.a<<endl;
}