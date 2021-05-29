#include <bits/stdc++.h>
using namespace std;

#define MAXN 50050
#define MAXL 20

vector<int> tree[MAXN];
int depth[MAXN], pai[MAXN][MAXL + 1], par[MAXN], ax[MAXN];

void build(int u, int p)
{
    pai[u][0] = p;

    for (int i = 1; i <= MAXL; i++)
        pai[u][i] = pai[pai[u][i - 1]][i - 1];

    for (auto f : tree[u])
        if (depth[f] == -1)
        {
            depth[f] = depth[u] + 1;
            build(f, u);
        }
}

long long lca(int u, int v)
{
    int x = u;
    if (depth[v] > depth[u])
        swap(u, v);

    for (int i = MAXL; i >= 0; i--)
        if (depth[u] - (1 << i) >= depth[v])
            u = pai[u][i];

    if (u == v)
        return u;

    for (int i = MAXL; i >= 0; i--)
        if (pai[u][i] != pai[v][i])
            u = pai[u][i], v = pai[v][i];

    return pai[u][0];
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int card;
        cin >> card;

        if (ax[card])
            par[i] = ax[card], par[ax[card]] = i;

        ax[card] = i;
    }

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    memset(depth, -1, sizeof(depth));

    depth[1] = 0;
    build(1, 1);

    long long ans = 0;
    for (int i = 1; i <= n; i++)
        ans += depth[i] + depth[par[i]] - 2 * depth[lca(i, par[i])];

    cout << ans / 2 << "\n";

    return 0;
}