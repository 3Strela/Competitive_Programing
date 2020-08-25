#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    while (cin >> n >> m)
    {
        if (n == 0 and m == 0)
            break;

        vector<vector<int>> graf(n + 1);

        for (int i = 0; i < m; i++)
        {
            int u, v, p;
            cin >> u >> v >> p;

            if (p == 1)
                graf[u].push_back(v);
            else
            {
                graf[u].push_back(v);
                graf[v].push_back(u);
            }
        }

        bool taCerto = true;
        for (int i = 1; i <= n; i++)
        {
            vector<bool> vis(m, false);
            set<int> check;

            vis[i] = true;
            queue<int> bfs;
            bfs.push(i);
            check.insert(i);
            while (!bfs.empty())
            {
                int p = bfs.front();
                bfs.pop();

                for (auto f : graf[p])
                    if (!vis[f])
                    {
                        vis[f] = true;
                        check.insert(f);
                        bfs.push(f);
                    }
            }

            if (check.size() < n)
            {
                taCerto = false;
                break;
            }
        }

        cout << (taCerto ? "1\n" : "0\n");
    }

    return 0;
}