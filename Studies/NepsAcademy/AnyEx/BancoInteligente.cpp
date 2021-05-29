#include <bits/stdc++.h>
using namespace std;

int table[7][5005];
vector<int> coins(6), vals = {2, 5, 10, 20, 50, 100};

int solv(int ind, int rest)
{
    if (rest == 0)
        return 1;

    if (rest < 0 or ind == 6)
        return 0;

    int &dp = table[ind][rest];
    if (dp != -1)
        return dp;

    int ans = 0;
    for (int i = 0; i <= coins[ind]; i++)
        ans += solv(ind + 1, rest - vals[ind] * i);

    return dp = ans;
}

int main()
{
    int v;
    cin >> v;

    for (int i = 0; i < 6; i++)
        cin >> coins[i];

    memset(table, -1, sizeof(table));

    cout << solv(0, v) << "\n";

    return 0;
}