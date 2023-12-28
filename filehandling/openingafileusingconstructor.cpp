#include <fstream>
#include <iostream>
using namespace std;
int main()
{

    ifstream mystream;
    mystream.open("maa.txt");
    if (!mystream)
    {
        cout << "file doesnt exist" << endl;
    }
}