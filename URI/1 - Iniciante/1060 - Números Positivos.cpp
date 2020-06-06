#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sm = 0;
    for (int i = 0; i < 6; i++)
    {
        double x;
        cin >> x;
        if (x > 0)
            sm++;
    }
    cout << sm << " valores positivos\n";

    return 0;
}