#include <iostream>

#include <fstream>

using namespace std;

int main()
{

    fstream obj;
    obj.open("life.txt", ios::out);
    if (!obj.is_open())
        cout << "file is unable to be opened" << endl;
    int i = 4;
    while (i != 0)
    {
        char p;
        cin >> p;
        obj.put(p);
        i--;
    }
    obj.close();
    ifstream jiggi;
    jiggi.open("life.txt", ios::app);
    char ch = ' ';
    ch = jiggi.get();
    // cout << endl;
    cout << ch << endl;
    jiggi.close();
    // obj.close();
}
