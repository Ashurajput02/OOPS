#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class student
{
public:
    static int count;
    static int sem;
    static string babe;

private:
    int id;
    long aadhar;

public:
    student(int id, int aadhar, int sem)
    {
        this->id = id;
        this->aadhar = aadhar;
        count++;
        this->sem = sem;
    }
    void display()
    {
        cout << "\nId:" << id << " Aadhar Number:" << aadhar;
    }
    static void kanak()
    {
        babe = "astril";
    }
    ~student();
};

student::~student()
{
    cout << "hey babe you called a destructor" << endl;
}
string student::babe = "hello";
int student::count = 0;
int student::sem = 0;
int main()
{

    // string ji = "jig";
    student s1(80, 8546, 3);
    // s1.kanak();
    student s2(76, 455641, 3);

    // if (ji == "jcb")
    // {

    //     student::babe = ji;
    // }
    // s1.display();
    // s2.display();
    // cout << endl
    //      << s2.babe;

    void (*func_ptr3)(void) = &student::kanak;

    void (*func_ptr1)(void) = &s1.kanak;

    void (*func_ptr2)(void) = &s2.kanak;

    cout << endl;
    // cout << s2.count;
    // cout << s1.babe;
    cout << endl
         << "hey buddy" << (&func_ptr1) << endl
         << (&func_ptr2) << (&func_ptr3);
    cout << endl
         << "hey buddy";

    return 0;
}
