#include <iostream>
using namespace std;

class employee
{

    int id;
    string name;

public:
    void display()
    {
        cout << id << endl
             << name << endl;
    }
};

int main()
{

    employee ashu;
    ashu.id = 80;
    ashu.name = "rajput"; // errors are created to show how priavte data members cant even be accessed by the object and even in the same package .

    ashu.display();
}
