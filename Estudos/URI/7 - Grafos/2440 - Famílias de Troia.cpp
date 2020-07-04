#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, ans = 0;
    cin >> n >> m;
    vector<vector<int>> grafo(n + 1);
    vector<bool> process(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!process[i])
        {
            ans++;
            queue<int> lista;
            lista.push(i);
            process[i] = true;
            while (!lista.empty())
            {
                int paizao = lista.front();
                lista.pop();
                for (auto j : grafo[paizao])
                {
                    if (!process[j])
                        lista.push(j);
                    process[j] = true;
                }
            }
        }
    }
    cout << ans << "\n";
    
    return 0;
}