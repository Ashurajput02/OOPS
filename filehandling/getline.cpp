#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    fstream jig;
    jig.open("kanak.txt", ios::out);
    jig << "hey there i am using whatspp." << endl
        << "namaskar friends" << endl;
    jig.close();
    ifstream rahul;
    rahul.open("kanak.txt");
    string st;
    getline(rahul, st);
    cout << st;
    rahul.close();
    ofstream darling;
    darling.open("kanak.txt");
    string s = "jiggi";
    // putline(darling,s);
    // there is nothing like putline
    darling.close();

    return 0;
}