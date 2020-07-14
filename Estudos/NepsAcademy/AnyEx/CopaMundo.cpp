#include <bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int>> pipii;

#define dist first
#define n1 second.first
#define n2 second.second

int find(int x, vector<int> &p)
{
    return (p[x] == x ? x : p[x] = find(p[x], p));
}

void join(int x, int y, vector<int> &p, vector<int> &ps)
{
    x = find(x, p), y = find(y, p);

    if (ps[x] > ps[y])
        swap(x, y);
    p[x] = y;

    if (ps[x] == ps[y])
        ps[y]++;
}

int main()
{

    int n, f, r;
    cin >> n >> f >> r;

    vector<pipii> mst(f + r + 1);
    vector<int> pai(n + 1), ps(n + 1);

    for (int i = 1; i <= n; i++)
        pai[i] = i, ps[i] = 0;

    for (int i = 1; i <= f + r; i++)
        cin >> mst[i].n1 >> mst[i].n2 >> mst[i].dist;

    sort(mst.begin() + 1, mst.begin() + 1 + f);
    sort(mst.begin() + 1 + f, mst.end());

    int ans = 0;
    
    for (int i = 1; i <= f + r; i++)
        if (find(mst[i].n1, pai) != find(mst[i].n2, pai))
        {
            join(mst[i].n1, mst[i].n2, pai, ps);

            ans+= mst[i].dist;
        }

    cout << ans << "\n";

    return 0;
}