#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    vector<pair<int, int>> bad_cells;
    for (int i = 0; i < X; i++) {
        int R, C;
        cin >> R >> C;
        bad_cells.push_back({R, C});
    }

    // Sort the bad cells by row and then by column
    sort(bad_cells.begin(), bad_cells.end());

    // Calculate the maximum number of crops
    int max_crops = (N * M + 1) / 2;

    // Calculate the minimum number of crops
    int min_crops = 0;
    for (int i = 0; i < X; i++) {
        int row = bad_cells[i].first;
        int col = bad_cells[i].second;

        // Check if there is a bad cell in the previous column or the next column of the same row
        if (i == 0 || (bad_cells[i - 1].first != row && bad_cells[i - 1].second != col - 1)) {
            min_crops++;
        } else if (i == X - 1 || (bad_cells[i + 1].first != row && bad_cells[i + 1].second != col + 1)) {
            min_crops++;
        }
    }

    cout << min_crops << " " << max_crops << endl;

    return 0;
}
