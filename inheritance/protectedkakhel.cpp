<<<<<<< HEAD
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
protected:
    string ash = "Ashu Rajput";
    string vish = "Yash Rajput";

public:
    void display()
    {
        int a = ash.length();
        int b = vish.length();
        cout << "the sum of lengths of ashu and vishu fulll name=" << (a + b) << endl;
    }
};

class B : public A
{
private:
    char a, b;

public:
    void showdown()
    {
        char a = ash[0];
        char b = vish[0];
    }
    void display()
    {
        cout << "hey" << ash << "your procode to enter in this universse is=" << a << endl;
    }
};

class C : protected A
{
    char c = ash[5];

public:
    void kanak()
    {
        cout << "hey buddy its" << c << "over there" << endl;
    }
};
int main()
{
    A obj1;
    B obj2;
    C obj3;
    // cout<< obj1.ash<<endl; this cant be done as they are protected and can be used only in the derived classes
    obj1.display();
    obj2.display();
    /*obj3.display();//yeh isliye nahi chala kyonki maine C main A ke sabhi
    members ko as private inherit kiya hai so veh uss subclass mein toh use ho jaaayenge
     lekin unko C ke objecct se use nahi kiya jaa sakega .
   */

    /*when we inherit a class
    from another class we simply allocatye memory to those instance variables of that classs as well;
    */
=======
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
protected:
    string ash = "Ashu Rajput";
    string vish = "Yash Rajput";

public:
    void display()
    {
        int a = ash.length();
        int b = vish.length();
        cout << "the sum of lengths of ashu and vishu fulll name=" << (a + b) << endl;
    }
};

class B : public A
{
private:
    char a, b;

public:
    void showdown()
    {
        char a = ash[0];
        char b = vish[0];
    }
    void display()
    {
        cout << "hey" << ash << "your procode to enter in this universse is=" << a << endl;
    }
};

class C : protected A
{
    char c = ash[5];

public:
    void kanak()
    {
        cout << "hey buddy its" << c << "over there" << endl;
    }
};
int main()
{
    A obj1;
    B obj2;
    C obj3;
    // cout<< obj1.ash<<endl; this cant be done as they are protected and can be used only in the derived classes
    obj1.display();
    obj2.display();
    /*obj3.display();//yeh isliye nahi chala kyonki maine C main A ke sabhi
    members ko as private inherit kiya hai so veh uss subclass mein toh use ho jaaayenge
     lekin unko C ke objecct se use nahi kiya jaa sakega .
   */

    /*when we inherit a class
    from another class we simply allocatye memory to those instance variables of that classs as well;
    */
>>>>>>> 37b46020a41f9be047c5a69cb1b3805138c6d500
}