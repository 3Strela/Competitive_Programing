#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int xi, yi, xf, yf;
    cin >> xi >> yi >> xf >> yf;
    while (xi != 0 and yi != 0 and xf != 0 and yf != 0)
    {
        if (xi == xf and yi == yf)
            cout << 0 << "\n";
        else if (xi == xf or yi == yf or abs(xf - xi) == abs(yf - yi))
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
        cin >> xi >> yi >> xf >> yf;
    }

    return 0;
}