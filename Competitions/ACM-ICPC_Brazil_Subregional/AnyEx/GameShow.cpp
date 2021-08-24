#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >> c;

    int ans = 100, mn = 100;
    for (int i = 0; i < c; i++)
    {
        int temp;
        cin >> temp;

        mn += temp;
        ans = max(ans, mn);
    }

    cout << ans << "\n";

    return 0;
}