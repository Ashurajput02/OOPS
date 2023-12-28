#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void setdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showdata()
    {
        cout << "the value of a=" << a << " the value of b=" << b << endl;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

    complex operator+(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

    complex operator*(complex c)
    {
        complex temp;
        temp.a = a * c.a;
        temp.b = b * c.b;
        return temp;
    }
    complex operator++()
    {
        complex temp;
        temp.a = ++a;
        temp.b = ++b;
        return temp;
    }

    complex operator--()
    {
        complex temp;
        temp.a = --a;
        temp.b = --b;
        return temp;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(5, 4);
    c2.setdata(2, 2);
    // c3=c1+c2; /*yeh yaha pe error dega hi for sure as compiler knows how to use + to add two primitive
    // data types but not user defined ones*/
    c3 = c1.add(c2);
    // but i want ki idhar mein + likhun aur kaam khud bbaa khud ho jaaye
    // for this purpose i will need a keyword operator and use it as the defined behaviour of that keyword in C
    // hamesha yaad rakho hum ?: aur sizeof ki overloading nahi kar sakte hain
    c3.showdata();
    complex c4, c5;
    c4.setdata(2, 2);
    c5.setdata(3, 2);
    complex c6;
    c6 = c4 + c5; // idhar ab + hamare defined tareeke se bhi kaam kar rha hain
    // could have also written as c4.operator+(c5);
    complex c7;
    c7 = c4 * c5; // here c4 is the caller object;

    c6.showdata();
    cout << "the value after multiplication:";
    c7.showdata();
    cout << endl;

    cout << "after using ternary decrement operator";
    complex c8, c9, c10;
    c8.setdata(4, 5);
    c9 = --c8;
    c9.showdata();

    cout << "after using ternary increment operator";
    complex c11, c12, c13;
    c11.setdata(4, 5);
    c12 = --c8;
    c12.showdata();
    // idhar hum dhyaan se dekehein to we r unable to use postfix that will be discussed in the next code.
}