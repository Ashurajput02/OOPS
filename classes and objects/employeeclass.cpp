#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    string name;
    void input(int id1, string name1)
    {
        id = id1;
        name = name1;
    }
    void display()
    {
        cout << id << endl
             << name << endl;
    }
};

int main()
{
    employee emp1;
    emp1.input(1, "ashu");
    emp1.display();
}
