#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[9] = {10, 2, 9, 6, 7, 6, 5, 3, -2};
    vector<int> v;
    int i = 0;
    int j = 0;
    int k = 3;
    int max = 0;
    int max2 = 0;
    while (j < 9)
    {
        if (arr[j] > max)
            max = arr[j];
        if (arr[j] < max && arr[j] > max2)
            max2 = arr[j];

        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            v.push_back(max);
            if (arr[i] == max)
            {
                max = max2;
                max2 = 0;
            }
            i++;
            j++;
        }
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}