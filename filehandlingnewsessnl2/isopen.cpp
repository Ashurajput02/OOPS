#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    ofstream abc;
    abc.open("hello.txt");
    abc << "NAME"
        << "     "
        << "AGE" << endl;
    for (int i = 0; i < 2; i++)
    {
        string s;
        cout << "enter name" << endl;
        cin >> s;
        abc << s << " ";
        int n;
        cout << "enter age" << endl;
        cin >> n;
        abc << n << endl;
    }
    abc.put('d');
    abc.close();

    ifstream tashu;
    tashu.open("hello.txt");
    char a = tashu.get();
    string b;
    getline(tashu, b);

    cout << b << endl;

    cout << a << endl;
    string ask;
    tashu >> ask;
    cout << ask << endl;

    tashu.close();
}