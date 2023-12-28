#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_min_crops(int N, int M, int X, vector<int>& R, vector<int>& C) {
    // Create a grid to track poor-nutrient cells
    vector<vector<bool>> grid(N, vector<bool>(M, false));
    for (int i = 0; i < X; i++) {
        grid[R[i] - 1][C[i] - 1] = true;
    }

    // Sort rows by the number of poor-nutrient cells (ascending)
    vector<pair<int, int>> rows;
    for (int i = 0; i < N; i++) {
        int poor_cells = count(grid[i].begin(), grid[i].end(), true);
        rows.push_back(make_pair(poor_cells, i));
    }
    sort(rows.begin(), rows.end());

    // Maximum number of crops
    int max_crops = 0;
    for (auto& row : rows) {
        int empty_cells = M - count(grid[row.second].begin(), grid[row.second].end(), true);
        max_crops += empty_cells / 2;  // Half of the available cells in the row
    }

    // Sort rows by the number of poor-nutrient cells (descending)
    sort(rows.rbegin(), rows.rend());

    // Minimum number of crops
    int min_crops = 0;
    for (auto& row : rows) {
        int empty_cells = M - count(grid[row.second].begin(), grid[row.second].end(), true);
        min_crops += empty_cells;
    }

    return max_crops, min_crops;
}

int main() {
    int N = 3;
    int M = 4;
    int X = 3;
    vector<int> R = {1, 2, 2};
    vector<int> C = {2, 1, 4};

    int max_crops, min_crops;
    tie(max_crops, min_crops) = max_min_crops(N, M, X, R, C);

    cout << "Maximum number of crops: " << max_crops << endl;
    cout << "Minimum number of crops: " << min_crops << endl;

    return 0;
}
