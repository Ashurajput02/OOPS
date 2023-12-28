#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int item_id;
    string item_name;
    void print()
    {
        cout << "the item id is=" << item_id << endl
             << "the item name is =" << item_name << endl;
    }
};

int main()
{

    A obj1;
    A *ptr1 = &obj1;
    ptr1->item_id = 1;
    ptr1->item_name = "tomatoes";
    obj1.print();
    obj1.item_id = 4;
    obj1.item_name = "kurkure";
    ptr1->print();
    // creating array of objects  which goes inside stack memory
    cout << endl;
    cout << endl;
    cout << endl;

    A obj[6];
    obj[0].item_id = 5;
    obj[1].item_id = 6;
    obj[0].item_name = "chocolates";
    obj[1].item_name = "chips";
    obj[4].item_id = 9;
    obj[4].item_name = "chewing gum";

    A *ptr2 = &obj[0];
    for (int i = 0; i < 6; i++)
    {
        ptr2->print();
        ptr2++;
    }

    // creating an array of objects which goes into heap memory
    A *ptr3 = new A[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter item ID" << endl;
        cin >> (ptr3 + i)->item_id;
        cout << "Enter item NAME " << endl;
        cin >> (ptr3 + i)->item_name;
    }

    for (int i = 0; i < 3; i++)
    {
        (*(ptr3 + i)).print();
    }
    delete[] ptr3;

    return 0;
}
