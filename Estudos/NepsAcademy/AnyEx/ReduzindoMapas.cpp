#include <bits/stdc++.h>
using namespace std;

struct krus
{
    int dis;
    int x, y;
};

bool comp(krus a, krus b)
{
    return a.dis < b.dis;
}

int find(int x, vector<int> &p)
{
    if (p[x] == x)
        return x;
    return p[x] = find(p[x], p);
}

void join(int x, int y, vector<int> &p, vector<int> &ps)
{
    p[find(x, p)] = find(y, p);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<krus> mst(m + 1), aresta(m + 1);
    vector<int> pai(n + 1), ps(n + 1);

    for (int i = 1; i <= m; i++)
        cin >> aresta[i].x >> aresta[i].y >> aresta[i].dis;

    for (int i = 1; i <= n; i++)
        pai[i] = i;

    sort(aresta.begin(), aresta.end(), comp);

    int tam = 0;
    for (int i = 1; i <= m; i++)
    {
        if (find(aresta[i].x, pai) != find(aresta[i].y, pai))
        {
            join(aresta[i].x, aresta[i].y, pai, ps);

            mst[++tam] = aresta[i];
        }
    }

    int sm = 0;
    for (int i = 1; i < n; i++)
        sm += mst[i].dis;

    cout << sm << "\n";

    return 0;
}
