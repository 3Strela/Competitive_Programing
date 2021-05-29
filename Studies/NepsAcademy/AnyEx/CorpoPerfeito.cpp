#include <bits/stdc++.h>
using namespace std;

int n, m, memo[2004][2004];
vector<int> calorias, proteinas;

int solv(int ind, int limit)
{
    if (limit < 0)
        return -949494949;
    if (ind == m)
        return 0;

    int &dp = memo[ind][limit];
    if (dp != -1)
        return dp;

    return dp = max(solv(ind + 1, limit), proteinas[ind] + solv(ind + 1, limit - calorias[ind]));
}

int main()
{
    cin >> n >> m;

    calorias.resize(m), proteinas.resize(m);
    for (int i = 0; i < m; i++)
        cin >> calorias[i] >> proteinas[i];

    memset(memo, -1, sizeof(memo));
    cout << solv(0, n) << "\n";

    return 0;
}