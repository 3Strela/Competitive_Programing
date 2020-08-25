#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0, fac[11];
    cin >> n;

    fac[0] = 1;
    for (int i = 1; i <= 9; i++)
        fac[i] = fac[i - 1] * i;

    for (int i = 9; i >= 0; i--)
    {
        int aux = n / fac[i];
        n -= (aux * fac[i]);
        ans += aux;
    }
    cout << ans << "\n";

    return 0;
}