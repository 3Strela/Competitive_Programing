#include <bits/stdc++.h>
using namespace std;

int dp[1005];

int solve(int x, vector<int> &vet)
{

    if (x == 0)
        return 1;

    if (x < 0)
        return 0;

    if (dp[x] >= 0)
        return dp[x];

    for (int i = 0; i < vet.size(); i++)
        if (solve(x - vet[i], vet))
            return dp[x - vet[i]] = 1;

    return dp[x] = 0;
}

int main()
{
    int v, n;
    cin >> n >> v;

    memset(dp, -1, sizeof(dp));

    vector<int> vet(n);
    for (int i = 0; i < n; i++)
        cin >> vet[i];

    cout << (solve(v, vet) ? 'S' : 'N') << "\n";

    return 0;
}