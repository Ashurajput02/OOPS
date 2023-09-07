#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class company
{
protected:
    string deptname;
    string bossname;
    string companyname;
    long long base;

public:
    company(string deptname,
            string bossname,
            string companyname, long long base)
    {
        this->bossname = bossname;
        this->companyname = companyname;
        this->deptname = deptname;
        this->base = base;
    }
};

class employee : protected company
{
private:
    int id;
    string name;
    string type;

    double amt = 0;

    void salarycalc(long long base, int r)
    {

        amt = base + ((base)*r) / 100.0;
    }

public:
    employee(string deptname, string bossname, string companyname, int id, string name, string type, long long base) : company(deptname, bossname, companyname, base)
    {
        this->id = id;
        this->name = name;
        this->type = type;
    }

    void salary()
    {

        if (type == "special")
        {
            cout << type << endl;
            salarycalc(base, 20);
        }
        else if (type == "normal")
        {
            salarycalc(base, 5);
        }
        else if (type == "core team")
        {
            salarycalc(base, 15);
        }
    }
    void show()
    {
        cout << base << endl;
        cout << type << endl;
        cout << "The Salary is =" << amt << endl;
    }
};

int main()
{
    employee e1("IT", "Ashu Rajput", "ASTRIL GROUP OF COMPANIES", 123, "Saksham Jain", "special", 100);
    e1.salary();
    e1.show();
    return 0;
}