#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, h = 0, m = 0, s = 0;
    cin >> a;
    while (a != 0)
    {
        if (a >= 3600)
        {
            int x = a / 3600;
            h = x;
            a -= x * 3600;
        }
        else if (a >= 60)
        {
            int x = a / 60;
            m = x;
            a -= x * 60;
        }
        else
        {
            s = a;
            a -= s;
        }
    }
    cout << h << ":" << m << ":" << s << "\n";

    return 0;
}