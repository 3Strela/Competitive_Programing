#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, in = 0, out = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x >= 10 and x <= 20)
            in++;
        else
            out++;
    }
    cout << in << " in\n"
         << out << " out\n";

    return 0;
}