#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> v(n * 2 + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[n + i] = v[i];
    }

    int r = -1, sm = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (r + 1 < i + n and sm < d)
            sm += v[++r];

        if (sm == d)
            ans++;

        sm -= v[i];
    }

    cout << ans << "\n";

    return 0;
}