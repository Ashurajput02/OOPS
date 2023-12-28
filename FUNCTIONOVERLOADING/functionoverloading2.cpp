#include <iostream>
using namespace std;
// void show(double i)
// {
//     cout << "I am interger" << i << endl;
// }
void show(char c)
{
    cout << "I am character " << c << endl;
}
// void show(int a)
// {
//     cout << "hello i m  number " << a << endl;
// }

void nirdesh(int a)
{
    cout << "hello in am a number" << endl;
}

void nirdesh(char a)
{
    cout << "hello i m a character" << endl;
}
void nirdesh(double tashu)
{
    cout << "hey babe its me a float number" << endl;
}
int main()
{
    // show("a");  non primitive data type hai string toh error
    show(97);       // type conversion
    show('a');      // fixed match
    show((int)'b'); // acha theek hai convert b to int that is 98 ab 98 h int aur int hai
    // nahi so phirse type conv to something available.

    nirdesh(25.5f); // type promotion hogya h float ka double mein.
}