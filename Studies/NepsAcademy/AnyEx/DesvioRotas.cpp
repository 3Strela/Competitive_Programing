#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main()
{
    int n, m, c, k;
    while (cin >> n >> m >> c >> k)
    {
        if (n == 0 and m == 0 and c == 0 and k == 0)
            break;

        vector<vector<pii>> graf(n + 1);

        for (int i = 0; i < m; i++)
        {
            int u, v, p;
            cin >> u >> v >> p;

            if ((u >= c and v >= c) or (u < c and v < c and abs(u - v) == 1))
                graf[u].push_back(pii(p, v)), graf[v].push_back(pii(p, u));
            
            if (u >= c and v < c)
                graf[u].push_back(pii(p, v));
            
            if (u < c and v >= c)
                graf[v].push_back(pii(p, u));
        }

        vector<bool> vis(n + 1, false);
        
        vector<int> dist(n + 1);
        for (int i = 0; i <= n; i++)
            dist[i] = INT_MAX;
        
        priority_queue<pii, vector<pii>, greater<pii>> fila;
        
        dist[k] = 0;
        fila.push(pii(dist[k], k));
        
        while (!fila.empty())
        {
            int pai = fila.top().second;
            fila.pop();
            vis[pai] = true;

            for (auto fi : graf[pai])
            {
                int dd = fi.first, at = fi.second;
                if (dist[at] > dist[pai] + dd)
                {
                    dist[at] = dist[pai] + dd;
                    
                    if (!vis[at])
                        fila.push(pii(dist[at], at));
                }
            }
        }
        cout << dist[c - 1] << "\n";
    }

    return 0;
}