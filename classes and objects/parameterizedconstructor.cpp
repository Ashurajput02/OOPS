#include <iostream>
using namespace std;
class student
{
public:
    int rollno;
    int age;
    string name;
    int dge, ap, ds, mttd, com, mg;
    student(int a, int b, string c, int d, int e, int f, int g, int h, int i)
    {
        rollno = a;
        age = b;
        name = c;
        dge = d;
        ap = e;
        ds = f;
        mttd = g;
        com = h;
        mg = i;
    }
    int percentage()
    {
        float per = (dge + ap + ds + mttd + com + mg) / 6;
        return per;
    }
};

int main()
{

    student s1 = student(80, 20, "ashu", 80, 80, 80, 80, 80, 80);
    float per = s1.percentage();
    cout << "your percentage=" << per << endl;

    return 0;
}
