#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int id;
    int sem;
    string name;
    char gender;
    void display()
    {
        cout << id << endl;
        cout << gender << endl;
        cout << name << endl;
        cout << sem << endl;
    }
};
int main()
{
    student s1 = new student(); // iss object ke bante hi automatically ek default constructor gets called and fills all the instance variables with system defined initial values for different data types

    s1.display();
    return 0;
}
