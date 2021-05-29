#include <bits/stdc++.h>
using namespace std;

vector<int> seg, v;

void build(int node, int l, int r)
{
    if (l == r)
    {
        if (v[l] > 0)
            seg[node] = 1;
        else if (v[l] < 0)
            seg[node] = -1;
        else
            seg[node] = 0;
    }
    else
    {
        int m = (l + r) / 2;

        build(2 * node, l, m);
        build(2 * node + 1, m + 1, r);

        seg[node] = seg[2 * node] * seg[2 * node + 1];
    }
}

void update(int node, int l, int r, int p, int x)
{
    if (l == r)
    {
        if (x > 0)
            seg[node] = 1;
        else if (x < 0)
            seg[node] = -1;
        else
            seg[node] = 0;
    }
    else
    {
        int m = (l + r) / 2;

        if (p <= m)
            update(2 * node, l, m, p, x);
        else
            update(2 * node + 1, m + 1, r, p, x);

        seg[node] = seg[2 * node] * seg[2 * node + 1];
    }
}

int query(int node, int l, int r, int a, int b)
{
    if (l >= a and r <= b)
        return seg[node];

    if (l > b or r < a)
        return 1;

    int m = (l + r) / 2;
    return query(2 * node, l, m, a, b) * query(2 * node + 1, m + 1, r, a, b);
}

int main()
{
    int n, k;

    while (cin >> n >> k)
    {
        seg.resize(4 * n), v.resize(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        build(1, 1, n);

        for (int i = 0; i < k; i++)
        {
            int a, b;
            char op;
            cin >> op >> a >> b;

            if (op == 'C')
                update(1, 1, n, a, b);
            else
            {
                int ans = query(1, 1, n, a, b);
                if (ans > 0)
                    cout << "+";
                else if (ans < 0)
                    cout << "-";
                else
                    cout << "0";
            }
            cout << '\n';
        }
    }

    return 0;
}