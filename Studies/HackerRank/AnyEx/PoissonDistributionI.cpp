#include <bits/stdc++.h>
using namespace std;

int fac(int x)
{
    if (x == 1 or x == 0)
        return 1;
    return x * fac(x - 1);
}

int main()
{
    double e = 2.71828, mean, ans = 0;
    int x;
    cin >> mean >> x;

    ans = pow(mean, x) * pow(e, -mean);
    ans /= fac(x);
    cout << setprecision(3) << fixed << ans << "\n";

    return 0;
}
