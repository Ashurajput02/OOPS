#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// class interestcalc
// {

// public:
//     float interest_calc(int price)
//     {
//         float ans = (price / 10.0);
//         return ans;
//     }
// };

// class shop : public interestcalc
// {
//     int a;

// public:
//     shop(int a)
//     {
//         this->a = a;
//     }
// };

// int main()
// {
//     cout << "Enter price" << endl;
//     int n;
//     cin >> n;
//     shop obj1(n);
//     float ans = obj1.interest_calc(n);
//     cout << ans << endl;
//     return 0;
// }

class A
{
protected:
    int a = 5;

public:
    void display()
    {
        cout << "hey buddy i am being displayed by base class using protected field by derived class " << endl;
    }
};

class B : protected A
{
public:
    void show()
    {
        cout << a << endl;
    }
};

int main()
{
    B obj;
    A obj1;
    obj.show();
    obj1.display();

    return 0;
}
