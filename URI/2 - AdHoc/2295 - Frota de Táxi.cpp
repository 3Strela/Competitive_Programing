#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double a, g, ra, rg, ans, tg, ta;
    cin >> a >> g >> ra >> rg;
    ta = a / ra;
    tg = g / rg;
    ans = min(ta, tg);
    if (ans == tg)
        cout << "G\n";
    else
        cout << "A\n";

    return 0;
}