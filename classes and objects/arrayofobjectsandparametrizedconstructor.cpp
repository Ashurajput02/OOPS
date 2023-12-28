#include <iostream>
using namespace std;
class A
{
    int a, b;
    static int count;

public:
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    A(int a)
    {
        this->a = a;
        cout << "single var" << endl;
    }
    void show()
    {
        count++;
        cout << "for object " << count << "the value of a and b= " << a << " " << b << endl;
    }
};

int A::count = 0;
int main()
{
    // A obj[3] = {A(1, 2), A(3, 4), A(5, 6)};
    A obj[3] = {1, 2, 3};
    obj[0].show();
    obj[1].show();
    obj[2].show();
}