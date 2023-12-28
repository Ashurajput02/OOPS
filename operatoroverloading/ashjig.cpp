#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int m, n;
    cin >> m >> n;
    int x, y;
    cin >> x >> y;

    vector<int> r, c;
    for (int i = 0; i < x; i++)
    {
        int k;
        cin >> k;
        r.push_back(k);
    }

    for (int j = 0; j < y; j++)
    {
        int k;
        cin >> k;
        c.push_back(k);
    }

    int jiggi[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            jiggi[i][j] = 1;
    }
    for (int i = 0; i < r.size(); i++)
    {
        jiggi[((r[i]) - 1)][((c[i]) - 1)] = 0;
    }
    int cntmin = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((jiggi[i][j] == jiggi[i + 1][j + 1] && (i + 1) < m && (j + 1) < n) || (jiggi[i][j] == jiggi[i - 1][j - 1] && (i - 1) > 0 && (j - 1) >= 0))
                jiggi[i][j] = 2;

            if (jiggi[i][j] == 1)
                cntmin++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            jiggi[i][j] = 1;
    }

    for (int i = 0; i < r.size(); i++)
    {
        jiggi[((r[i]) - 1)][((c[i]) - 1)] = 0;
    }

    int cntmax = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if ((jiggi[i][j] == jiggi[i + 1][j + 1] && (i + 1) < m && (j + 1) < n) || (jiggi[i][j] == jiggi[i - 1][j - 1] && (i - 1) > 0 && (j - 1) >= 0))
                jiggi[i][j] = 2;

            if (jiggi[i][j] == 1)
                cntmax++;
        }
    }
    cout << cntmin << cntmax << endl;
    vector<int> ashu;
    //     ashu.push_back(cntmax);

    //     ashu.push_back(cntmin);
    // return ashu;
}
int main()
{
    solve();
    return 0;
}
