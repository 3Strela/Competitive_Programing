#include <bits/stdc++.h>
using namespace std;
int inf = 99999999;
int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    vector<vector<int>> graf(n + 1);
    for (int w = 0; w < m; w++)
    {
        int i, j;
        cin >> i >> j;
        graf[i].push_back(j);
        graf[j].push_back(i);
    }
    vector<bool> vis(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            ans++;
            queue<int> fila;
            fila.push(i);
            vis[i] = true;
            while (!fila.empty())
            {
                int pai = fila.front();
                fila.pop();
                for (auto fi : graf[pai])
                {
                    if (vis[fi])
                        continue;
                    vis[fi] = true;
                    fila.push(fi);
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}