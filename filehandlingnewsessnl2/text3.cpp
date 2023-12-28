#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Usage: output <filename>\n";
        return 1;
    }
    ofstream out(argv[1]); // output, normal file argv[1] = sample , argv[0] -
    if (!out)
    {
        cout << "Cannot open output file.\n";
        return 1;
    }
    char str[80];
    cout << "Write strings to disk. Enter ! to stop.\n";
    do
    {
        cout << ":";
        cin >> str;         // from keyboard
        out << str << endl; // writing to a file connected by using object "out" - out is connected to "sample"
    } while (*str != '!');

    out.close();
    return 0;
}
