#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    string c[500];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            for (int j = 0; j < m; j++)
                if (c[i][j] == '.' and c[i - 1][j] == 'o')
                    c[i][j] = 'o';
        if (i < n - 1)
        {
            for (int j = m - 2; j >= 0; j--)
                if (c[i][j] == '.' and c[i][j + 1] == 'o' and c[i + 1][j + 1] == '#')
                    c[i][j] = 'o';
            for (int j = 1; j < m; j++)
                if (c[i][j] == '.' and c[i][j - 1] == 'o' and c[i + 1][j - 1] == '#')
                    c[i][j] = 'o';
        }
    }
    for (int i = 0; i < n; i++)
        cout << c[i] << "\n";

    return 0;
}