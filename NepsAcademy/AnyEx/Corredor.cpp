#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sm = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sm = max(0, sm + temp);
        ans = max(ans, sm);
    }
    cout << ans << "\n";

    return 0;
}