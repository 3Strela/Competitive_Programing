#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, c, r1, r2;

    while (cin >> l >> c >> r1 >> r2)
    {
        if (l == 0 and c == 0 and r1 == 0 and r2 == 0)
            break;

        bool taCerto = true;

        if (max(r1, r2) * 2 > l or max(r1, r2) * 2 > c)
            taCerto = false;

        long double distCentros = sqrt(pow(l - (r1 + r2), 2) + pow(c - (r1 + r2), 2));
        if (distCentros < r1 + r2)
            taCerto = false;

        cout << (taCerto ? "S\n" : "N\n");
    }

    return 0;
}