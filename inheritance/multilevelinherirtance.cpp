#include <iostream>
using namespace std;
class Account
{
public:
    float salary = 60000;
};
class Programmer : public Account
{
public:
    float bonus = 5000;
};

class admin : public Programmer
{
public:
    float comisssion(float salary)
    {
        return (salary * 2) / 3;
    }
};
int main()
{
    admin p1;
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;
    cout << "comission of hiring person" << p1.comisssion(p1.salary) << endl;
    return 0;
}