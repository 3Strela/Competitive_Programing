#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        long double c;
        cin >> c;
        while (c > 1)
        {
            c /= 2;
            ans++;
        }
        cout << ans << " dias\n";
    }

    return 0;
}