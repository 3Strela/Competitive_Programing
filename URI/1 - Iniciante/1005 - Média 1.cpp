#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b;
    cin >> a >> b;
    cout << "MEDIA = " << setprecision(5) << fixed << ((a * 3.5) + (b * 7.5)) / 11 << "\n";

    return 0;
}