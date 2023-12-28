#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Prime
{
public:
    int n;
    Prime()
    {
        n = 0;
    }
    void input(int x)
    {
        n = x;
    }
    void display()
    {

        int count = 0;
        int k = n;
        while (k >= n)
        {
            if (n % k == 0)
                count++;
            k--;
        }
        if (count == 2)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
};
int main()
{
    Prime p1;
    p1.input(5);
    p1.display();
    return 0;
}