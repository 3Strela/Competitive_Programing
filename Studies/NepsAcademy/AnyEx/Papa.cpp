#include <bits/stdc++.h>
using namespace std;

struct cx
{
    int resistencia, peso;
};

bool ord(cx a, cx b)
{
    return a.resistencia - a.peso - b.peso > b.resistencia - a.peso - b.peso;
}

int n;
cx caixas[1003];
map<pair<int, int>, int> dp;

int knap(int ind, int limit)
{
    if (ind == n || limit <= 0)
        return 0;

    if (dp.count({ind, limit}))
        return dp[{ind, limit}];

    int pula = knap(ind + 1, limit);

    if (caixas[ind].resistencia - caixas[ind].peso >= 0 && caixas[ind].peso <= limit)
        return dp[{ind, limit}] = max(pula,
                                      knap(ind + 1, min(limit - caixas[ind].peso, caixas[ind].resistencia - caixas[ind].peso)) + 1);

    return dp[{ind, limit}] = pula;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> caixas[i].peso >> caixas[i].resistencia;

    sort(caixas, caixas + n, ord);

    cout << knap(0, 1002000) << '\n';

    return 0;
}