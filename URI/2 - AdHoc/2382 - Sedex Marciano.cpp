#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int l, a, p, r, vcu, ves;
    cin >> l >> a >> p >> r;
    vcu = pow(l, 2) + pow(a, 2) + pow(p, 2);
    ves = 4 * pow(r, 2);
    if (vcu > ves)
        cout << "N\n";
    else
        cout << "S\n";

    return 0;
}