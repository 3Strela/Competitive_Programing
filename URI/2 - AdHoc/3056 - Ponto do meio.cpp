#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ulli l = 2;
    for (int i = 0; i < n; i++)
        l += l - 1;
    cout << l * l << "\n";

    return 0;
}