#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, c, ans = 0, ax = INT_MIN; 
    cin >> n >> c;
    
    for (int i = 0; i < n; i++)
    {
        int v, pr = ans;
        cin >> v;

        if (ax + v > ans)
            ans = ax + v;

        if (pr - v - c > ax)
            ax = pr - v - c;
    }
    
    cout << ans << "\n";

    return 0;
}