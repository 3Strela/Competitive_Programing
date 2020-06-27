#include <bits/stdc++.h>
using namespace std;
int main()
{
    char matriz[2053][2053];
    int n, m, ans = 0;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matriz[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (matriz[i][j] == '#' and (matriz[i - 1][j] != '#' or matriz[i + 1][j] != '#' or matriz[i][j - 1] != '#' or matriz[i][j + 1] != '#'))
                ans++;
    cout << ans << "\n";

    return 0;
}