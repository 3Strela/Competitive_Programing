#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q, aux = 1;
    while (cin >> n >> q)
    {
        if (n == q and q == 0)
            break;
        vector<int> lista(n);
        for (int i = 0; i < n; i++)
            cin >> lista[i];
        sort(lista.begin(), lista.end());
        cout << "CASE# " << aux << ":\n";
        for (int i = 0; i < q; i++)
        {
            int temp, ans = -1;
            cin >> temp;
            for (int j = 0; j < lista.size(); j++)
                if (lista[j] == temp)
                {
                    ans = j + 1;
                    break;
                }
            if (ans != -1)
                cout << temp << " found at " << ans << "\n";
            else
                cout << temp << " not found\n";
        }
        aux++;
    }

    return 0;
}