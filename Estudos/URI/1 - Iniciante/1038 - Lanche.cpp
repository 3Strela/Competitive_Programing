#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    cout.precision(2);
    cout.setf(ios::fixed);
    if (a == 1)
        cout << "Total: R$ " << b * 4.00 << "\n";
    if (a == 2)
        cout << "Total: R$ " << b * 4.50 << "\n";
    if (a == 3)
        cout << "Total: R$ " << b * 5.00 << "\n";
    if (a == 4)
        cout << "Total: R$ " << b * 2.00 << "\n";
    if (a == 5)
        cout << "Total: R$ " << b * 1.50 << "\n";

    return 0;
}