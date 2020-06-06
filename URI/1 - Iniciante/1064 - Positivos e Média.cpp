#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sm = 0;
    double qt = 0;
    for (int i = 0; i < 6; i++)
    {
        double x;
        cin >> x;
        if (x > 0)
        {
            qt += x;
            sm++;
        }
    }
    cout << sm << " valores positivos\n"
         << setprecision(1) << fixed << qt / sm << "\n";

    return 0;
}