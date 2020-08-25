#include <bits/stdc++.h>
using namespace std;

int n, m, ans = INT_MAX;

bool check(int i, int j)
{
    if (i >= 1 and i <= n and j >= 1 and j <= m)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> n >> m;

    vector<vector<int>> graf(n + 1, vector<int>(m + 1));
    vector<vector<bool>> vis(n + 1, vector<bool>(m + 1));

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> graf[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (!vis[i][j])
            {
                vis[i][j] = true;
                queue<pair<int, int>> bfs;
                bfs.push(make_pair(i, j));
                int ax = 0, num = graf[i][j];
                while (!bfs.empty())
                {
                    int x = bfs.front().first, y = bfs.front().second;
                    bfs.pop();
                    ax++;
                    int cima = x - 1, baixo = x + 1, direita = y + 1, esquerda = y - 1;
                    if (check(cima, y) and !vis[cima][y] and graf[cima][y] == num)
                    {
                        bfs.push(make_pair(cima, y));
                        vis[cima][y] = true;
                    }
                    if (check(baixo, y) and !vis[baixo][y] and graf[baixo][y] == num)
                    {
                        bfs.push(make_pair(baixo, y));
                        vis[baixo][y] = true;
                    }
                    if (check(x, direita) and !vis[x][direita] and graf[x][direita] == num)
                    {
                        bfs.push(make_pair(x, direita));
                        vis[x][direita] = true;
                    }
                    if (check(x, esquerda) and !vis[x][esquerda] and graf[x][esquerda] == num)
                    {
                        bfs.push(make_pair(x, esquerda));
                        vis[x][esquerda] = true;
                    }
                }
                ans = min(ax, ans);
            }

    cout << ans << "\n";

    return 0;
}