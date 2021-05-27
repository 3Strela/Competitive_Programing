#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    long long int n;
    cin >> n;

    long long int ans = 1;
    while (n)
    {
        if (n & 1)
            ans *= 2;

        n /= 2;
    }

    cout << ans << "\n";

    return 0;
}