#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sm = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int xr, yr, xa, ya;
        cin >> xr >> yr >> xa >> ya;
        sm += pow(abs(xr - xa), 2) + pow(abs(yr - ya), 2);
    }
    cout << sm << "\n";

    return 0;
}