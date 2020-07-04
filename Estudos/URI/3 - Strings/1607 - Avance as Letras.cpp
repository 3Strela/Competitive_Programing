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
        string a, b;
        int ans = 0;
        cin >> a >> b;
        for (int i = 0; i < a.size(); i++)
            if (int(b[i]) - int(a[i]) < 0)
                ans += (122 - int(a[i])) + (int(b[i]) - 96);
            else
                ans += int(b[i]) - int(a[i]);
        cout << ans << "\n";
    }

    return 0;
}