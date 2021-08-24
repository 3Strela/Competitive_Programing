#include <bits/stdc++.h>
using namespace std;

const int mx = 1e4 + 1;

int n, c, impost[mx];
vector<int> graf[mx], custo[mx];
long long ans;

void dfs(int v, int p, int imp)
{
    for (int i = 0; i < (int)graf[v].size(); i++)
        if (p != graf[v][i])
        {
            dfs(graf[v][i], v, custo[v][i]);
            impost[v] += impost[graf[v][i]];
        }

    ans += imp * ((impost[v] + c - 1) / c);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> n >> c;

    for (int i = 0; i < n; i++)
        cin >> impost[i];

    for (int i = 1; i < n; i++)
    {
        int u, v, p;
        cin >> u >> v >> p;
        u--, v--;

        graf[u].push_back(v);
        custo[u].push_back(p);

        graf[v].push_back(u);
        custo[v].push_back(p);
    }

    dfs(0, 0, 0);

    cout << ans * 2 << "\n";

    return 0;
}