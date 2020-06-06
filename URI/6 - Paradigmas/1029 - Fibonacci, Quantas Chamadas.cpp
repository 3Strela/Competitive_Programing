#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, temp, fib[40], cal[40];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 39; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    cal[0] = 1;
    cal[1] = 1;
    cal[2] = 2;
    cal[3] = 4;
    for (int i = 4; i <= 39; i++)
        cal[i] = cal[i - 1] + cal[i - 2] + 2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        cout << "fib(" << temp << ") = " << cal[temp] << " calls = " << fib[temp] << "\n";
    }

    return 0;
}