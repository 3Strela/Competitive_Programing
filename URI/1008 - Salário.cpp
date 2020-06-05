#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    double c;
    cin >> a >> b >> c;
    cout << "NUMBER = " << a << "\n"
         << "SALARY = U$ " << setprecision(2) << fixed << b * c << "\n";

    return 0;
}