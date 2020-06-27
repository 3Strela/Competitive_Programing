#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 10000500;
vector<ll> primes;
vector<bool> is_prime(MAXN + 1, true);
void crivo(ll n)
{
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= n; i++)
        if (is_prime[i])
        {
            primes.push_back(i);
            for (ll j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
}
int main()
{
    int q;
    ll n;
    cin >> q;
    crivo(MAXN);
    for (int i = 0; i < q; i++)
    {
        cin >> n;
        int de = 0, ate = primes.size() - 1;
        while (de <= ate)
        {
            int meio = (de + ate) / 2;
            if (primes[meio] < n)
                de = meio + 1;
            else
                ate = meio - 1;
        }
        cout << de + 1 << "\n";
    }

    return 0;
}