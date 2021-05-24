#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, ans = 0;
    cin >> n >> m;

    vector<int> lista(n);
    for (int i = 0; i < n; i++)
        cin >> lista[i];

    for (int i = 1; i < n; i++)
    {
        if (m >= lista[i - 1])
            lista[i] += m - lista[i - 1];
        else
            lista[i] -= lista[i - 1] - m;

        ans += abs(m - lista[i - 1]);
    }
    
    cout << ans << "\n";

    return 0;
}