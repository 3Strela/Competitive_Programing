#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    for (int i = 1; i < 12; i += 2)
        if (x % 2 != 0)
            cout << i + (x - 1) << "\n";
        else
            cout << i + x << "\n";

    return 0;
}