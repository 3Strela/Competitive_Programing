#include <bits/stdc++.h>
using namespace std;

typedef long double ld;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<ld> E(n + 1);
    E[0] = 0;
    ld sum = 0;

    if (a > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i - a >= 0)
                sum += E[i - a];

            if (i - b - 1 >= 0)
                sum -= E[i - b - 1];

            E[i] = (sum / (b - a + 1)) + 1;
        }
    }
    else if (a == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            sum += E[i - 1];

            if (i - b - 1 >= 0)
                sum -= E[i - b - 1];

            E[i] = (sum / b) + ((b + 1) / ld(b));
        }
    }

    cout << setprecision(5) << fixed << E[n] << '\n';

    return 0;
}