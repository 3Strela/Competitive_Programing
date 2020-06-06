#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long double mr = 1000000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double x;
        int y;
        cin >> x >> y;
        long double temp = (1000 * x) / y;
        mr = min(temp, mr);
    }
    cout << setprecision(2) << fixed << mr << "\n";

    return 0;
}