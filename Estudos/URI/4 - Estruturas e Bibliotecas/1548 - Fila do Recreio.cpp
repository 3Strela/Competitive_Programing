#include <bits/stdc++.h>
using namespace std;
bool decres(int a, int b)
{
    return a > b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k, ans = 0;
        cin >> k;
        vector<int> lista(k), ll(k);
        for (int j = 0; j < k; j++)
        {
            cin >> lista[j];
            ll[j] = lista[j];
        }
        sort(lista.begin(), lista.end(), decres);
        for (int j = 0; j < k; j++)
            if (ll[j] == lista[j])
                ans++;
        cout << ans << "\n";
    }

    return 0;
}