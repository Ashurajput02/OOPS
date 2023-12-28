#include <fstream>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    fstream jig;
    jig.open("lifeline.txt", ios::out);
    jig << "Life is a game, and I'm not playing it." << endl;
    jig << "Sneha Thakur is a good girl" << endl;
    jig << "I love my Parents" << endl;
    jig.close();

    fstream kanak;
    kanak.open("lifeline.txt", ios::in);
    char ch = ' ';

    while (!kanak.eof())
    {
        // kanak >> ch;
        ch = kanak.get();
        cout << ch;
    }
    ofstream chirag;
    chirag.open("lifeline.txt");

        while (!kanak.eof())
    {
        // kanak >> ch;
        ch = kanak.get();
        cout << ch;
    }
    kanak.close();

    chirag.close();
}