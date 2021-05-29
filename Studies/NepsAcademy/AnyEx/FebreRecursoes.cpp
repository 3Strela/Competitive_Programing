#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, k, m;
vector<ll> vet;
ll memo[1010];

ll solv(int ind)
{
    ll &dp = memo[ind];
    if (dp != -1)
        return dp;

    ll resp = 0;
    for (int i = 1; i <= n; i++)
        resp += (vet[i] * solv(ind - i)) % m;

    return dp = resp % m;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    cin >> n >> k >> m;

    vet.resize(n);
    for (int i = 1; i <= n; i++)
        cin >> vet[i];

    memset(memo, -1, sizeof(memo));

    for (int i = 1; i <= n; i++)
    {
        cin >> memo[i];
        memo[i] %= m;
    }

    cout << solv(k) << "\n";

    return 0;
}