// #include <iostream>
// using namespace std;
// class Ashu;
// class Ashu
// {
// private:
//     int a = 5;
//     int c,d;
//     string kanak = "tashu";
// public:
// Ashu(int x,int y);
// Ashu(const Ashu &obj){
//     c=obj.c;
//     d=obj.d;
// }
// public:
//     int ash();
// };
//  Ashu::Ashu(int x, int y){
//    this->c=x;
//    this->d=y;

// }
// struct ashbabe
// {
//     int id;
//     string name;

//     void fun()
//     {
//         cout << "hey guys welcome to our team" << endl;
//     }
// };
// struct ashbabe a1;
// struct ashbabe a2;

// // to check for scope resolution operator
// //   int Ashu :: ash(){
// //      cout<<"hey babe"<<endl;
// //      return 0;
// //  }

// int main()
// {
//     // a1.id = 4;
//     // a1.name = "jiggi";
//     // a1.fun();
// Ashu obj1(5,6);
// Ashu obj2(obj1);

// }

#include <iostream>
using namespace std;
class ashu
{
    int a;
    int b;

public:
    ashu(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    static int res;
    static void sum();
};
void ashu::sum()
{
    cout << "hey baby" << endl;
};
int main()
{
    ashu::sum();
}
