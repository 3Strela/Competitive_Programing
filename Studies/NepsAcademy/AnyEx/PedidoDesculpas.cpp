#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005], valor[1005], peso[1005], n, s;

int mochila(int ind, int capac)
{
    if (capac < 0)
        return INT_MIN;

    if (ind == n)
        return 0;

    int &ans = dp[ind][capac];

    if (ans != -1)
        return ans;

    return ans = max(mochila(ind + 1, capac), mochila(ind + 1, capac - peso[ind]) + valor[ind]);
}

int main()
{
    int ind = 1;
    while (cin >> s >> n)
    {
        if (s == 0 and n == 0)
            break;

        for (int i = 0; i < n; i++)
            cin >> peso[i] >> valor[i];

        memset(dp, -1, sizeof(dp));
        cout << "Teste " << ind++ << "\n";
        cout << mochila(0, s) << "\n\n";
    }
    return 0;
}
