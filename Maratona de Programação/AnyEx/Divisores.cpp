#include <bits/stdc++.h>
using namespace std;

const int inf = 999999999;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = inf;
    for (int i = 2; i * i <= c; i++)
        if (i % a == 0 and i % b != 0 and c % i == 0 and d % i != 0)
        {
            ans = min(ans, i);
            break;
        }

    if (c / 2 % a == 0 and c / 2 % b != 0 and c % c / 2 == 0 and d % c / 2 != 0)
        ans = min(ans, c / 2);

    cout << (ans == inf ? -1 : ans) << "\n";

    return 0;
}