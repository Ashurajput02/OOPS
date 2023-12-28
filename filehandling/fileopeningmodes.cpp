#include <fstream>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    fstream jig;
    jig.open("rajputana.txt", ios::out | ios::app);

    if (jig.eof() == 1)
        cout << "file created became empty" << endl;
    else
    {
        char ch;
        while (!jig.eof())
        {
            ch = jig.get();
            cout << ch;
        }
    }
    // yaha file empty isliye nahi aaya bcz baby vaha create hote hi sab blank hogya aur ek character blank space mein chala gya naa biro

    jig.close();
}