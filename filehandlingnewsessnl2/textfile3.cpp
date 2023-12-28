#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("INVNTRY"); // input
    if (!in)
    {
        cout << "Cannot open INVENTORY file.\n";
        return 1;
    }
    char item[20];
    float cost;
    in >> item >> cost;                  // read from a file
    cout << item << " " << cost << "\n"; // put to display/screen
    in >> item >> cost;
    cout << item << " " << cost << "\n";
    in >> item >> cost;
    cout << item << " " << cost << "\n";
    in.close();
    return 0;
}
// using in, we read and put into the data types and displayed on to the screen , using cout
