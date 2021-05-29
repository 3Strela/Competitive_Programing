#include <bits/stdc++.h>
using namespace std;

int table[1004][1004];
vector<int> seq1, seq2;

int lcs(int a, int b)
{
    int &dp = table[a][b];
    if (dp >= 0)
        return dp;

    if (a == 0 or b == 0)
        return dp = 0;

    if (seq1[a] == seq2[b])
        return 1 + lcs(a - 1, b - 1);

    return dp = max(lcs(a - 1, b), lcs(a, b - 1));
}

int main()
{
    int n, m;
    cin >> n >> m;

    seq1.resize(n + 1), seq2.resize(m + 1);
    for (int i = 1; i <= n; i++)
        cin >> seq1[i];
    for (int i = 1; i <= m; i++)
        cin >> seq2[i];

    memset(table, -1, sizeof(table));

    int llcs = lcs(n, m);

    cout << n - llcs << " " << m - llcs << "\n";

    return 0;
}