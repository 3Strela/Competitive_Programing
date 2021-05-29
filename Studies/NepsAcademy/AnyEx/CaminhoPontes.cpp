#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<pii>> graf(n + 2);
    
    for (int i = 0; i < m; i++)
    {
        int u, v, p;
        cin >> u >> v >> p;
        graf[u].push_back(pii(p, v));
        graf[v].push_back(pii(p, u));
    }

    vector<int> dist(n + 2);
    dist[0] = 0;
    
    for (int i = 1; i <= n + 1; i++)
        dist[i] = INT_MAX;

    vector<bool> vis(n + 2);

    priority_queue<pii, vector<pii>, greater<pii>> fila;
    fila.push(pii(dist[0], 0));

    while (!fila.empty())
    {
        int p = fila.top().second;
        fila.pop();
        vis[p] = true;
        for (auto f : graf[p])
        {
            int dd = f.first, at = f.second;
            if (dist[at] > dist[p] + dd)
            {
                dist[at] = dist[p] + dd;
                if (!vis[at])
                    fila.push(pii(dist[at], at));
            }
        }
    }

    cout << dist[n + 1] << "\n";
    
    return 0;
}