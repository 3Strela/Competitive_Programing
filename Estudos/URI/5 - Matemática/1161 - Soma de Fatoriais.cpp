#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long int fac[21];
    fac[0] = 1;
    for (int i = 1; i < 21; i++)
        fac[i] = fac[i - 1] * i;
    int a, b;
    while (cin >> a >> b)
        cout << fac[a] + fac[b] << "\n";
    
    return 0;
}