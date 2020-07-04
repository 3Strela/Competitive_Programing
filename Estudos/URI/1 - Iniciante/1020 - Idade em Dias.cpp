#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, an, ms, dd;
    cin >> a;
    while (a != 0)
    {
        if (a >= 365)
        {
            int x = a / 365;
            an = x;
            a -= x * 365;
        }
        if (a >= 30)
        {
            int x = a / 30;
            ms = x;
            a -= x * 30;
        }
        else
        {
            dd = a;
            a -= dd;
        }
    }
    cout << an << " ano(s)\n"
         << ms << " mes(es)\n"
         << dd << " dia(s)\n";

    return 0;
}