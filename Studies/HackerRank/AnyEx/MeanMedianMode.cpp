#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int n;
    scanf("%d", &n);

    ll sum = 0, qt = 0;
    map<ll, ll> mp;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &v[i]);
        mp[v[i]] += 1;
        sum += v[i];
        qt++;
    }
    double mean = sum / double(qt);

    double median;
    int md1 = -1, md2 = -1;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
        if (i == (n / 2) - 1)
            md1 = v[i];
        else if (i == (n / 2) && n % 2 == 0)
            md2 = v[i];

    if (md2 == -1)
        median = md1;
    else
        median = (md1 + md2) / 2.0;

    int mode = 0, aux_mode = 0;
    for (auto k : mp)
        if (k.second > aux_mode)
            aux_mode = k.second, mode = k.first;

    printf("%.1lf\n", mean);
    printf("%.1lf\n", median);
    printf("%d\n", mode);

    return 0;
}