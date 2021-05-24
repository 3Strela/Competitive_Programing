#include <bits/stdc++.h>
using namespace std;

const int inf = 299999999;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, m, ans = 0;
    cin >> n >> m;

    vector<int> coins(n), dp(m + 1, inf);

    for (int i = 0; i < n; i++)
        cin >> coins[i];

    sort(coins.begin(), coins.end());

    dp[0] = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
            if (i < coins[j])
                break;
            else if (dp[i - coins[j]] != inf)
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
    }

    cout << (dp[m] < 10 ? "S\n" : "N\n");

    return 0;
}