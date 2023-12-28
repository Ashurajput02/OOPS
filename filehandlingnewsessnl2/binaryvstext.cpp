#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ofstream abc;
    abc.open("kanak.txt", ios::out);
    abc << "hey babe\n its me ";
    abc.close();
}