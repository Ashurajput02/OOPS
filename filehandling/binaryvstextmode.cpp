#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ofstream kanak;
    kanak.open("rajputana.txt", ios::binary);
    kanak << "hey there welcome back \n ashu rajput" << endl;
    kanak.close();
}
