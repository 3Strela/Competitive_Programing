#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned int a, b;
    while (cin >> a >> b)
    {
        a ^= b;
        cout << a << "\n";
    }

    return 0;
}