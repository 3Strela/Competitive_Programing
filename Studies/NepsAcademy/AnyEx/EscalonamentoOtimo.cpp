#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> graf(n);
    vector<int> grau(n), ord;
    priority_queue<int, vector<int>, greater<int>> ax;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        grau[v]++;
        graf[u].push_back(v);
    }

    for (int i = 0; i < n; i++)
        if (grau[i] == 0)
            ax.push(i);

    int ind = 0;
    while (!ax.empty())
    {
        int p = ax.top(), l = graf[p].size();
        ind++;

        ax.pop();

        for (int i = 0; i < l; i++)
        {
            grau[graf[p][i]]--;
            if (grau[graf[p][i]] == 0)
                ax.push(graf[p][i]);
        }

        ord.push_back(p);
    }

    if (ind < n)
        cout << "*\n";
    else
        for (auto k : ord)
            cout << k << "\n";

    return 0;
}