#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 0, fac[11];
    fac[0] = 1;
    for (int i = 1; i <= 9; i++)
        fac[i] = fac[i - 1] * i;
    cin >> n;
    for (int i = 9; i >= 0; i--)
    {
        int aux = n / fac[i];
        n -= (aux * fac[i]);
        ans += aux;
    }
    cout << ans << "\n";

    return 0;
}