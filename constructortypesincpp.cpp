#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{

    Student(int id2, int phy2, int chem2, int maths2)
    {
        id = id2;
        phy = phy2;
        chem = chem2;
        maths = maths2;
    }

private:
    int id;
    int phy;
    int chem;
    int maths;

public:
    float calc()
    {
        float per = (phy + chem + maths) / 3.0;
        cout << "percentage of " << id << " is =";
        return per;
    }
};

int main()
{
    int t = 0;
    int p, c, m, id;
    while (t != 1)
    {
        cout << "enter id of the student" << endl;
        cin >> id;
        cout << "enter physics marks of the student" << endl;
        cin >> p;
        cout << "enter chemistry marks of the student" << endl;
        cin >> c;
        cout << "enter maths marks of the student" << endl;
        cin >> m;

        Student obj(id, p, c, m);
        float per = obj.calc();
        cout << per << endl;
        cout << "press 1 to exit" << endl;
        cin >> t;
    }
    return 1;
}