#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Account
{
public:
    float salary = 60000;
    int finalpay(int bonus)
    {
        return (salary + bonus);
    }
};
class Programmer : public Account
{
public:
    float bonus = 5000;
};
int main(void)
{
    Programmer p1;
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;
    cout << "the final pay the employee gets=" << p1.finalpay(p1.bonus);
    return 0;
}