#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;

    vector<int> ida(n), volta(n), lista(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lista[i];
        if (i == 0)
            ida[i] = lista[i];
        else
            ida[i] = max(ida[i - 1], lista[i]);
    }
    
    for (int i = n - 1; i >= 0; i--)
        if (i == n - 1)
            volta[i] = lista[i];
        else
            volta[i] = max(volta[i + 1], lista[i]);
    
    for (int i = 0; i < n; i++)
        if (lista[i] < min(volta[i], ida[i]))
            ans++;
    
    cout << ans << "\n";

    return 0;
}