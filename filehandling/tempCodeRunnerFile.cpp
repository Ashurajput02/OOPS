#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[9] = {10, 2, 9, 6, 7, 6, 5, 3, -2};
    vector<int> v;
    int i = 0;
    int j = 0;
    int k = 3;

    while (j < 9) {
        if (arr[j] > arr[i]) {
            i = j;
        }

        if (j - i + 1 < k) {
            j++;
        } else if (j - i + 1 == k) {
            v.push_back(arr[i]);

            if (i == j) {
                i++;
                j++;
            } else {
                i++;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}
