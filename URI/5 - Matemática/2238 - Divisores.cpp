#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ulli a, b, c, d, ans = 1000000000;
    cin >> a >> b >> c >> d;
    for (ulli i = 0; i*i <= c; i++)
    {
        ulli aux = c/2;
        if (i % a == 0 and i % b != 0 and c % i == 0 and d % i != 0)
            ans = min(ans, i);
        if (aux % a == 0 and aux % b != 0 and c % aux == 0 and d % aux != 0)
            ans = min(ans, aux);
    }
    if (ans == 1000000000)
        cout << "-1\n";
    else
        cout << ans << "\n";

    return 0;
}