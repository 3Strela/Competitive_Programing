#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n + 1), v2(n + 1), v3(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        v2[i] = min(v2[i - 1] + 1, v[i]);
    }

    for (int i = n; i >= 1; i--)
        v3[i] = min(v3[i + 1] + 1, v[i]);

    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, min(v2[i], v3[i]));

    cout << ans << "\n";

    return 0;
}