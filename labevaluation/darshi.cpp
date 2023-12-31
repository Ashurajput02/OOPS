#include <iostream>
using namespace std;

class personalinfo
{
public:
    char name[50];
    int age;
    char gender[10];
    int date;
    int month;
    int year;
    int phoneNO;

    personalinfo()
    { // constructor
        cout << "WELCOME" << endl;
    }

    virtual void getinfo()
    { // function overriding
        cout << "Enter your Name" << endl;
        cin >> name;
        cout << "Enter your age" << endl;
        cin >> age;
        cout << "Enter your Gender" << endl;
        cin >> gender;
        cout << "Enter date of birth" << endl;
        cin >> date;
        cout << "Enter month in which you were born" << endl;
        cin >> month;
        cout << "Enter year of birth" << endl;
        cin >> year;
        cout << "Enter your Phone Number" << endl;
        cin >> phoneNO;
    }

    virtual void show()
    { // function overriding
        cout << "NAME: " << name << endl;
        cout << "AGE: " << age << endl;
        cout << "GENDER: " << gender << endl;
        cout << "DOB: " << date << "/" << month << "/" << year << endl;
        cout << "phoneNO: " << phoneNO << endl;
    }

    friend void sh(); // friend function
};

void sh()
{
    cout << "This is only for faculty" << endl;
}

class professionalinfo : public personalinfo
{ // multilevel inheritance
public:
    string institutename;
    string degree;
    int salary;
    string course;
    int noOfcourses;

    professionalinfo()
    {
        cout << "professionalinfo" << endl; // constructor
        salary = 0;
    }

    virtual void getinfo()
    {
        personalinfo::getinfo();
        cout << "Enter your institute " << endl;
        cin >> institutename;
        cout << "Enter your degree " << endl;
        cin >> degree;

        cout << "Enter no. of courses" << endl;
        cin >> noOfcourses;
        cout << "Enter course" << endl;
        cin >> course;
    }

    virtual void show()
    {
        personalinfo::show();
        cout << "INSTITUTE: " << institutename << endl;
        cout << "DEGREE: " << degree << endl;
        cout << "Course: " << course << endl;
        cout << "NO. OF COURSES " << noOfcourses << endl;
    }

    int calculatesalary(int bonus)
    {
        salary = salary + bonus;
        return salary;
    }
};

int main()
{
    personalinfo pi;
    professionalinfo pr;
    personalinfo *a;
    a = &pi;
    a->getinfo();
    a->show();
    a = &pr;
    a->getinfo();
    a->show();
    pr.calculatesalary(25000);

    return 0;
}