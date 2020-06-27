#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int m, ans = 0;
    cin >> m;
    while (m--)
    {
        int a;
        cin >> a;
        if (s.count(a))
            s.erase(a);
        else
        {
            s.insert(a);
            ans += 2;
        }
    }
    cout << ans << "\n";

    return 0;
}