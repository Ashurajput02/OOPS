#include <iostream>

#include <fstream>

using namespace std;

int main()

{

    char ch;

       ifstream in("ashurajput.txt", ios::in | ios::binary);

    if (!in) // opening files via constructor
    {

        cout << "Cannot open file.";

        return 1;
    }

    while (in)
    {

        in.get(ch);

        if (in)
            cout << ch;
    }
    cout << "Jigyasha Malyan" << endl;
    return 0;
}