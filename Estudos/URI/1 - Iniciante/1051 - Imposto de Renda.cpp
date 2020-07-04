#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, c;
    cin >> n;
    cout.precision(2);
    cout.setf(ios::fixed);
    if (n >= 0 and n <= 2000)
        cout << "Isento\n";
    else if (n > 2000 and n <= 3000)
        cout << "R$ " << (n - 2000) * 0.08 << "\n";
    else if (n > 3000 and n <= 4500)
    {
        b = n;
        a = 1000;
        b -= 3000;
        cout << "R$ " << (a * 0.08) + (b * 0.18) << "\n";
    }
    else if (n > 4500)
    {
        a = 1000;
        b = 1500;
        c = n - 4500;
        cout << "R$ " << (a * 0.08) + (b * 0.18) + (c * 0.28) << "\n";
    }

    return 0;
}