#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define MAXN 100023

ll seg[4*MAXN], lz[4*MAXN], coins[MAXN];

void build(int node, int l, int r)
{
    if (l == r)
        seg[node] = coins[l], lz[node] = -1;
    else
    {
        int m = (l + r) / 2;

        build(2 * node, l, m);
        build(2 * node + 1, m + 1, r);

        lz[node] = -1;
        seg[node] = seg[2 * node] + seg[2 * node + 1];
    }
}

void push(int node, int l, int r)
{
    if (lz[node] != -1)
    {
        seg[node] = lz[node] * ll(r - l + 1);

        if (l != r)
            lz[2 * node] = lz[node], lz[2 * node + 1] = lz[node];

        lz[node] = -1;
    }
}

void update(int node, int l, int r, int a, int b, int x)
{
    push(node, l, r);

    if (l > b || a > r)
        return;

    if (a <= l && r <= b)
    {
        lz[node] = x, push(node, l, r);
        return;
    }

    if (a <= l && r <= b)
    {
        seg[node] = x * ll(r - l + 1);

        if (l != r)
            lz[2 * node] = x, lz[2 * node + 1] += x;
    }

    int m = (l + r) / 2;

    update(2 * node, l, m, a, b, x);
    update(2 * node + 1, m + 1, r, a, b, x);

    seg[node] = seg[2 * node] + seg[2 * node + 1];
}

ll query(int node, int l, int r, int a, int b)
{
    push(node, l, r);

    if (l > b || a > r)
        return 0LL;

    if (a <= l && r <= b)
        return seg[node];

    int m = (l + r) / 2;

    return query(2 * node, l, m, a, b) + query(2 * node + 1, m + 1, r, a, b);
}

int main()
{
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> coins[i];

    build(1, 1, n);

    while (q--)
    {
        int op, a, b, x;
        cin >> op;

        if (op == 1)
        {
            cin >> a >> b >> x;
            update(1, 1, n, a, b, x);
        }
        else
        {
            cin >> a >> b;

            ll ans = query(1, 1, n, a, b);
            cout << ans << "\n";
        }
    }

    return 0;
}