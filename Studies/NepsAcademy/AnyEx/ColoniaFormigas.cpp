#include <bits/stdc++.h>
using namespace std;

#define MAXN 100050
#define MAXL 20

typedef long long ll;

vector<pair<int, ll>> tree[MAXN];
int depth[MAXN], pai[MAXN][MAXL + 1];
ll dist[MAXN][MAXL + 1];

void build(int u)
{
    // pai[u][0] = p
    // dist[u][0] = v
    for (int i = 1; i <= MAXL; i++)
    {
        pai[u][i] = pai[pai[u][i - 1]][i - 1];
        dist[u][i] = dist[u][i - 1] + dist[pai[u][i - 1]][i - 1];
    }
    for (auto f : tree[u])
        if (depth[f.first] == -1)
        {
            depth[f.first] = depth[u] + 1;

            build(f.first);
        }
}

ll lca(int u, int v)
{
    ll ddU = 0, ddV = 0;

    if (depth[v] > depth[u])
        swap(u, v);

    for (int i = MAXL; i >= 0; i--)
        if (depth[u] - (1 << i) >= depth[v])
        {
            ddU += dist[u][i];
            u = pai[u][i];
        }

    if (u == v)
        return ddU;

    for (int i = MAXL; i >= 0; i--)
        if (pai[u][i] != pai[v][i])
        {
            ddU += dist[u][i], ddV += dist[v][i];
            u = pai[u][i], v = pai[v][i];
        }

    return ddU + ddV + dist[u][0] + dist[v][0];
}

int main()
{
    int n;

    while (cin >> n)
    {
        if (n == 0)
            break;

        for (int i = 0; i < n; i++)
            tree[i].clear();

        for (int i = 1; i < n; i++)
        {
            int a;
            ll l;
            cin >> a >> l;

            pai[i][0] = a, dist[i][0] = l;
            tree[a].push_back({i, l});
        }

        memset(depth, -1, sizeof(depth));

        depth[0] = 0;
        build(0);

        int q;
        cin >> q;
        while (q--)
        {
            int s, d;
            cin >> s >> d;

            cout << lca(s, d) << (q == 0 ? "\n" : " ");
        }
    }

    return 0;
}