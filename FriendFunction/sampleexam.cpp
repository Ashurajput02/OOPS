// // #include <iostream>
// // #include <cstdlib>
// // using namespace std;

// // struct yash
// // {
// //     int b;
// //     int c;
// // };
// // struct yash fire;

// // struct ash
// // {
// // private:
// //     int b;

// // public:
// //     static int a;
// //     void set(int c, int d)
// //     {
// //         a = c;
// //         b = d;
// //     }
// //     void show()
// //     {
// //         cout << "by struct " << a << "  " << b << endl;
// //     }
// // };
// // int ash::a = 0;
// // class jig
// // {
// // private:
// //     int a, b;

// // public:
// //     void set(int c, int d)
// //     {
// //         a = c;
// //         b = d;
// //     }
// //     void show()
// //     {
// //         cout << "by class" << a << "  " << b << endl;
// //     }
// // };

// // int main()
// // {
// //     struct ash *ashu = (struct ash *)malloc(sizeof(struct ash));
// //     jig jigsaw;

// //     jigsaw.set(2, 3);
// //     jigsaw.show();
// //     ashu->a = 4;
// //     ashu->set(2, 5);
// //     ashu->show();
// // }

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
//     }
//     ashu()
//     {
//         a = 9;
//         b = 4;
//     }
//     void show()
//     {
//         cout << "the values in object b = " << a << " " << b << endl;
//     }
//     ~ashu();
// };
// ashu::~ashu()
// {
//     cout << "destructor called" << endl;
// }

// int main()
// {
//     ashu a;
//     ashu c(2, 4);
//     c.show();
//     ashu b(a);
//     b.show();
// }

#include <iostream>
using namespace std;
class ash
{
public:
    int a;

    void show()
    {
        this->a = 5;
        cout << "jai shree ram" << endl;
    }

public:
    static int fun()
    {
        cout << "hey babe" << endl;
    }
};

int main()
{
    ash b;
    cout << b.ash::a << endl;
    b.show();
    cout << b.a << endl;
    b.fun();
}