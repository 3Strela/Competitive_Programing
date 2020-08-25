#include <bits/stdc++.h>
using namespace std;

int dp[2][100005], mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int t, m, n;
    cin >> t >> m >> n;

    for (int i = m; i <= n; i++)
        dp[0][i] = 1;

    bool y = false, x = true;
    for (int i = 1; i < t; i++)
    {
        y = x, x = !y;
        for (int j = m; j <= n; j++)
            dp[y][j] = (dp[x][j + 1] + dp[x][j - 1]) % mod;
    }

    int ans = 0;
    for (int i = m; i <= n; i++)
        ans = (ans + dp[y][i]) % mod;

    cout << ans << "\n";

    return 0;
}