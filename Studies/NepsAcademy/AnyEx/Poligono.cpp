#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0, qt = 0;
    for (int i = 0; i < n; i++)
    {
        if (qt > v[i])
            ans = max(ans, i + 1);

        qt += v[i];
    }

    cout << ans << "\n";

    return 0;
}