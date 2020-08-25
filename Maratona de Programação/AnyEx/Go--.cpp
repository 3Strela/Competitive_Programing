#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, p;
    cin >> n >> p;

    vector<vector<int>> brancas(n + 1, vector<int>(n + 1)), pretas(n + 1, vector<int>(n + 1));

    for (int i = 0; i < p; i++)
    {
        int l, c;
        cin >> l >> c;

        pretas[l][c]++;
    }

    for (int i = 0; i < p; i++)
    {
        int l, c;
        cin >> l >> c;

        brancas[l][c]++;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            (brancas[i][j] != 0 ? brancas[i][j] = 0 : brancas[i][j] = min(brancas[i - 1][j], min(brancas[i][j - 1], brancas[i - 1][j - 1])) + 1);
            (pretas[i][j] != 0 ? pretas[i][j] = 0 : pretas[i][j] = min(pretas[i - 1][j], min(pretas[i][j - 1], pretas[i - 1][j - 1])) + 1);
        }

    int br = 0, pr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            pr += max(0, brancas[i][j] - pretas[i][j]);
            br += max(0, pretas[i][j] - brancas[i][j]);
        }

    cout << pr << " " << br << "\n";

    return 0;
}