#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    vector<int> div_primos;
    for (ll div = 2; div * div <= n; div++)
    {
        int exp = 0;
        while (n % div == 0)
            n /= div, exp++;

        if (exp > 0)
            div_primos.push_back(div);
    }

    if (n > 1)
        div_primos.push_back(n);

    cout << (1 << div_primos.size()) - div_primos.size() - 1 << "\n";

    return 0;
}