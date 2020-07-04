#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, ans = 4;
    cin >> l;
    while (l / 2 >= 2)
    {
        l /= 2;
        ans *= 4;
    }
    cout << ans << "\n";
    
    return 0;
}