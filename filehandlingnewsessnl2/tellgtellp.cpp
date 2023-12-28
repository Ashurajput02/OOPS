#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream abc;
    abc.open("hello.txt", ios::ate);
    if (!abc)
        cout << "unable to open file" << endl;
    cout << abc.tellp();
    abc.seekp(4, ios_base::beg);
    cout << abc.tellp();
    abc << "SINGH RAJPUT" << endl;

    // abc.seekp(4, ios_base::beg);
    // abc << "SINGH"
    //     << " ";
    abc.close();
}