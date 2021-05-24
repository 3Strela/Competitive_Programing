#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        if (min(v[i], m - v[i]) >= v[i - 1])
            v[i] = min(v[i], m - v[i]);
        else if (max(v[i], m - v[i]) >= v[i - 1])
            v[i] = max(v[i], m - v[i]);
        else
        {
            cout << "-1\n";
            return 0;
        }
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++)
        ans += v[i];

    cout << ans << "\n";

    return 0;
}