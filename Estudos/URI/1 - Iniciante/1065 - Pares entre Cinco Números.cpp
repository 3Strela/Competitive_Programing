#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sm = 0;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            sm++;
    }
    cout << sm << " valores pares\n";

    return 0;
}