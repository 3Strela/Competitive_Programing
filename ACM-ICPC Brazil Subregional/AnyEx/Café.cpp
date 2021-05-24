#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int a, b, c, cas1, cas2, cas3;
    cin >> a >> b >> c;

    cas1 = (b * 2) + (c * 4);
    cas2 = (a * 2) + (c * 2);
    cas3 = (b * 2) + (a * 4);

    cout << min(cas1, min(cas2, cas3)) << "\n";

    return 0;
}