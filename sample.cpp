// #include <iostream>
// using namespace std;

// class ashu
// {

//     int a, b;

// public:
//     ashu(int a, int b)
//     {
//         this->a = a;
//         this->b = b;
//         cout << "man made default constructor invoked" << endl;
//     }

//     // ashu(const ashu &obj)
//     // {
//     //     a = obj.a;
//     //     b = obj.b;
//     //     cout << "man made copy constructor invoked" << endl;
//     // }

//     ashu(int a, int b, int c);
//     void show()
//     {
//         cout << "the values of a and b is===" << a << " " << b << endl;
//     }
// };

// ashu::ashu(int a, int b, int c)
// {
//     this->a = a;
//     this->b = b;
//     cout << "declared outside" << endl;
// }

// int main()
// {

//     ashu a1(1, 2);
//     ashu a2(a1);
//     ashu a3 = a1;
//     a3.show();

//     // ashu a5(8, 9);
//     // ashu a4(4, 5);
//     // a4 = a5;
//     // // a1.show();

//     // // a2.show();
//     // // a3.show();
//     // // a4.show();

//     // a5.show();
//     ashu a6(0, 2, 7);
//     a6.show();

//     return 0;
// }

#include <iostream>
using namespace std;
class ashu
{
    int a, b;

public:
    string kanak = "kanak rajput";
    ashu(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    ~ashu()
    {
        cout << "default destructor invoked" << endl;
    }
};

void ashutosh()
{
    ashu a1(1, 2);
}

int main()
{
    ashutosh();

    ashu a2(3, 4);
    ashu a3(5, 6);
    a3.~ashu();
    cout << "hey alexa" << endl;
    cout << a3.kanak << endl;
    ashu a5(7, 8);
}