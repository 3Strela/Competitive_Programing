#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int c, v;
    cin >> c >> v;

    vector<vector<pii>> graf(c + 1), ax(c + 1);

    for (int i = 0; i < v; i++)
    {
        int u, v, p;
        cin >> u >> v >> p;

        ax[u].push_back(pii(v, p));
        ax[v].push_back(pii(u, p));
    }

    for (int i = 1; i <= c; i++)
        for (auto x : ax[i])
            for (auto f : ax[x.first])
            {
                graf[i].push_back(pii(x.second + f.second, f.first));
                graf[f.first].push_back(pii(x.second + f.second, i));
            }

    vector<int> dist(c + 1, 999299999);

    priority_queue<pii, vector<pii>, greater<pii>> fila;

    dist[1] = 0;
    fila.push(pii(dist[1], 1));

    while (!fila.empty())
    {
        int p = fila.top().second;
        fila.pop();

        for (auto f : graf[p])
        {
            int dd = f.first, att = f.second;

            if (dist[att] > dist[p] + dd)
            {
                dist[att] = dist[p] + dd;
                fila.push(pii(dist[att], att));
            }
        }
    }

    cout << (dist[c] != 999299999 ? dist[c] : -1) << "\n";

    return 0;
}