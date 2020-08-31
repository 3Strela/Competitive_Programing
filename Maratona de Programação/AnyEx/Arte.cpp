#include <bits/stdc++.h>
using namespace std;

const int mx = 10e4 + 13;

struct circunferencia
{
    int x, y, raio;
};

int n, m, k;
int pai[mx];
circunferencia pos[mx];

int find(int x)
{
    return pai[x] == x ? x : pai[x] = find(pai[x]);
}

bool solv(circunferencia a, circunferencia b)
{
    return pow((a.x - b.x), 2) + pow((a.y - b.y), 2) <= pow(a.raio, 2) + pow(b.raio, 2) + 2 * a.raio * b.raio;
}

bool check(circunferencia a, circunferencia b)
{
    if ((a.x - a.raio > 0 && a.y + a.raio < m) or (b.x + b.raio < n && b.y - b.raio > 0))
        return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++)
        cin >> pos[i].x >> pos[i].y >> pos[i].raio, pai[i] = i;

    for (int i = 1; i <= k; i++)
        for (int j = i + 1; j <= k; j++)
            if (solv(pos[i], pos[j]))
            {
                int x = find(i), y = find(j);

                if (x != y)
                    pai[x] = y;
            }

    bool taCerto = true;
    for (int i = 1; i <= k; i++)
        for (int j = 1; j <= k; j++)
            if (check(pos[i], pos[j]) && pai[i] == pai[j])
                taCerto = false;

    cout << (taCerto ? "S\n" : "N\n");

    return 0;
}