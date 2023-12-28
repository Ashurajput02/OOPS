#include <fstream>
#include <conio.h>
#include <iostream>
using namespace std;
class ash
{
};
int main()
{
    // ofstream file;
    // // getch();
    // file.open("test.txt");
    // // getch();
    // int c = 1 + 2;
    // file << "h";
    // // getch();
    // file.close();

    ifstream finn;
    finn.open("test.txt");
    char ch;
    while (!finn.eof())
    {
        ch = finn.get();
        // finn >> ch;//yadi hum data ko aise lete hain toh voh space ko by default delimeter maanta h and dont show it
        cout << ch;
    }
}
