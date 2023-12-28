#include <iostream>
using namespace std;
class college
{
protected:
    string collgname;

    string branchname;
    int batch;

public:
    college(string collgname,
            string branchname,
            int batch)
    {
        this->batch = batch;
        this->branchname = branchname;
        this->collgname = collgname;
    }
};

class CSE1
{
protected:
    string a = "EEE";
    string b = "EDC";
    string c = "AS";
    string d = "EVS";
    string e = "COE";
    string f = "CP";
};

class CSE2
{
protected:
    string a1 = "DGE";
    string b1 = "COMMSKILLS";
    string c1 = "MG";
    string d1 = "MTTD";
    string e1 = "DSA";
    string f1 = "AP";
};

class student : protected college, protected CSE1, protected CSE2
{

private:
    string name;
    string id;
    int sem;
    string a2;
    string b2;
    string c2;
    string d2;
    string e2;
    string f2;

public:
    student(string collgname, string id, string branchname, int batch, int sem, string name) : college(collgname, branchname, batch)
    {
        this->name = name;
        this->id = id;
        this->sem = sem;
    }

    void subject()
    {
        if (sem == 1)
        {
            this->a2 = a;
            this->b2 = b;
            this->c2 = c;
            this->d2 = d;
            this->e2 = e;
            this->f2 = f;
        }
        else if (sem == 2)
        {
            this->a2 = a1;
            this->b2 = b1;
            this->c2 = c1;
            this->d2 = d1;
            this->e2 = e1;
            this->f2 = f1;
        }
    }
    void show()
    {
        cout << "WELCOME TO" << collgname << endl;
        cout << "Name of the Student:" << name << endl;
        cout << "Subjects alloted to him:" << endl;
        cout << a2 << endl;
        cout << b2 << endl;
        cout << c2 << endl;
        cout << d2 << endl;
        cout << e2 << endl;
        cout << f2 << endl;
    }
};
int main()
{

    // student(string collgname,string btid,string branchname,int batch,int sem):college(collgname, btid, branchname,batch){

    student s1("IIITN", "bt22cse080", "CSE", 26, 2, "Ashu Rajput");
    s1.subject();
    s1.show();
}