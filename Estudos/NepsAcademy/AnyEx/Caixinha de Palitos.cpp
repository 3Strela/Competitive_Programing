#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long int ans = 0;
    for (int i = 1; i <= m; ++i)
        ans += max(0, min(m, n - i - 1) - max(1, n - i - m) + 1);
    cout << ans << "\n";

    return 0;
}