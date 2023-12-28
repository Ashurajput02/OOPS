#include <iostream>
using namespace std;
int main()
{
    cout << "enter array size" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    int k;
    cout << "enter sum needed" << endl;
    cin >> k;
    int i, j;
    i = 0;
    j = 0;
    int count = 0;
    int sum = 0;
    int res = 0;
    while (j < n)
    {
        sum += arr[j];
        if (sum < k)
            j++;
        else if (sum == k)
        {
            count++;
            res = max(res, (j - i + 1));
            sum -= arr[i];
            i = i + 1;
            j = i;
        }
        else
        {
            i++;
            j = i;
        }
    }
    cout << "the largest subarray size=" << res << endl;
    cout << "the total subarray possible=" << count << endl;

    return 0;
}