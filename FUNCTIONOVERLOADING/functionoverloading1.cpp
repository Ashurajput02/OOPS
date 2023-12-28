#include <iostream>
using namespace std;
int square(int y)
{
    cout << "int is called" << endl;
    return y * y;
}
// double square(double y)
// {
//     cout << "double is called" << endl;
//     return y * y;
// }

// double square(float y)
// {
//     cout << "float is called" << endl;
//     return y * y;
// }
// double square(float y)
// {
//     cout << "float is called and redeclared maamu" << endl;
//     return y * y;
// }

void jiggi(char a)
{
    cout << a << endl;
}
void jiggi(float a)
{
    cout << "hey baby i came out here via float" << endl;
    cout << a << endl;
}
int main()
{
    cout << square(10) << endl;
    cout << square('a') << endl;
    cout << square(10.0) << endl;
    cout << square(10.00f) << endl;
    jiggi(25);
}
