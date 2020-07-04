#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c, n, v[1000], sm;
    double md;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> n;
        sm = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sm += v[i];
        }
        md = sm / n;
        sm = 0;
        for (int i = 0; i < n; i++)
            if (v[i] > md)
                sm++;
        cout << setprecision(3) << fixed << (double(sm) / n) * 100 << "%\n";
    }

    return 0;
}