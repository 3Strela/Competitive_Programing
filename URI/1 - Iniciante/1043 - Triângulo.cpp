#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;
    cout.precision(1);
    cout.setf(ios::fixed);
    if ((abs(b - c) < a and a < b + c) or
        (abs(a - c) < b and b < a + c) or
        (abs(a - b) < c and c < b + a))
        cout << "Perimetro = " << a + b + c << "\n";
    else
        cout << "Area = " << ((a + b) * c) / 2 << "\n";

    return 0;
}