#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp != 1)
            ans++;
    }

    cout << ans  << "\n";

    return 0;
}