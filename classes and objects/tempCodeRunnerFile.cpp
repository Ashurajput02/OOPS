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

int main(){

employee ashu;
ashu.id=80;
ashu.name="rajput";
ashu.display();
}
