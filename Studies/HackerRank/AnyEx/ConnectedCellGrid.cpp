#include <bits/stdc++.h>
using namespace std;

int qt;
void dfs(int i, int j, vector<vector<int>> &grid)
{
    int ll[8] = {-1, 1, 0, 0, -1, -1, 1, 1}, cc[8] = {0, 0, -1, 1, -1, 1, -1, 1};
    grid[i][j] = 0;
    for (int k = 0; k < 8; ++k)
    {
        int col = j + cc[k], lin = i + ll[k];
        if (lin >= 0 and lin < grid.size())
            if (col >= 0 and col < grid[lin].size())
                if (grid[lin][col] == 1)
                {
                    qt++;
                    dfs(lin, col, grid);
                }
    }
}

// Complete the maxRegion function below.
int maxRegion(vector<vector<int>> grid)
{
    int ans = 0;

    for (int i = 0; i < grid.size(); ++i)
        for (int j = 0; j < grid[i].size(); ++j)
            if (grid[i][j] != 0)
            {
                qt = 1;
                cout << i << " " << j << " " << qt << "\n";
                dfs(i, j, grid);
                ans = max(ans, qt);
            }

    return ans;
}