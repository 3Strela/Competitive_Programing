#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, x;
    while (cin >> a >> b)
    {
        x = a * b;
        x = x + (a * b);
        cout << x << "\n";
    }

    return 0;
}