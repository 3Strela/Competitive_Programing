#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, ans = 0;
    cin >> n >> m;
    vector<vector<int>> grafo(n + 1);
    unordered_set<string> nomes;
    vector<string> pp;
    for (int i = 0; i < m; i++)
    {
        string nm1, nm2, rel;
        int u = 1, v = 1;
        cin >> nm1 >> rel >> nm2;
        if (nomes.find(nm1) == nomes.end())
        {
            nomes.insert(nm1);
            pp.push_back(nm1);
        }
        if (nomes.find(nm2) == nomes.end())
        {
            nomes.insert(nm2);
            pp.push_back(nm2);
        }
        for (int i = 0; i < pp.size(); i++)
            if (nm1 == pp[i])
            {
                u = i + 1;
                break;
            }
        for (int i = 0; i < pp.size(); i++)
            if (nm2 == pp[i])
            {
                v = i + 1;
                break;
            }
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    vector<bool> process(n + 1);
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