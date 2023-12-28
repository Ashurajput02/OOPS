#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class company
{

public:
    int id;
    int sal;
    static string ceo;
};

int main()
{
    company s1, s2;
    s1.id = 221;
    s1.sal = 4000;
    s2.id = 223;
    s2.sal = 5000;
    s1.ceo = "ashu rajput";
    cout << "the id and salary of student 1 =" << s1.id << " " << s1.sal << endl;

    cout << "the id and salary of student 2=" << s2.id << " " << s2.sal << endl;

    cout << "the ceo of student 1=" << s1.ceo << endl;
    cout << "the ceo of student 2=" << s2.ceo << endl;
    return 0;
}