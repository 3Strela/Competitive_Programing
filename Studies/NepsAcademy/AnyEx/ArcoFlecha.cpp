#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll mergeInv(vector<ll> &v)
{
    if (v.size() == 1)
        return 0;

    vector<ll> u1, u2;
    for (int i = 0; i < v.size() / 2; i++)
        u1.push_back(v[i]);
    for (int i = v.size() / 2; i < v.size(); i++)
        u2.push_back(v[i]);

    ll ans = 0;
    ans += mergeInv(u1);
    ans += mergeInv(u2);

    u1.push_back(-1);
    u2.push_back(-1);

    int indI = 0, indJ = 0;
    for (int i = 0; i < v.size(); i++)
        if (u1[indI] > u2[indJ])
            v[i] = u1[indI++];
        else
        {
            v[i] = u2[indJ++];
            ans += u1.size() - 1 - indI;
        }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;

        v[i] = (x * x) + (y * y);
    }
    ll ans = mergeInv(v);
    cout << ans << "\n";

    return 0;
}