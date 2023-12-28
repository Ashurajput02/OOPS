#include <iostream>
using namespace std;
struct ash
{
private:
    int b;

public:
    static int a;
    void set(int c, int d)
    {
        a = c;
        b = d;
    }
    void show()
    {
        cout << "by struct" << a << "  " << b << endl;
    }
};
int ash::a = 0;
class jig
{
private:
    int a, b;

public:
    void set(int c, int d)
    {
        a = c;
        b = d;
    }
    void show()
    {
        cout << "by class" << a << "  " << b << endl;
    }
};

int main()
{
    struct ash ashu;
    jig jigsaw;

    jigsaw.set(2, 3);
    jigsaw.show();
    ashu.set(2, 3);
    ashu.show();
    ashu.a = 4;
    cout << ashu.a << endl;
}