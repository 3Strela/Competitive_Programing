#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k;
    cin >> n >> k;
    long long int ans = 0;
    while (n > 0)
    {
        n -= k;
        ans += 5;
    }
    if (ans < 10)
        ans = 10;
    cout << ans << '\n';
    
    return 0;
}