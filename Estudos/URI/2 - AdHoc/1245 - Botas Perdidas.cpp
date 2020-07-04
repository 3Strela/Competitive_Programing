#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    pair<int, char> pe;
    vector<pair<int, char>> lista;
    while (cin >> n)
    {
        lista.erase(lista.begin(), lista.end());
        for (int i = 0; i < n; i++)
        {
            cin >> pe.first >> pe.second;
            lista.push_back(pe);
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (lista[i].first == lista[j].first and lista[i].second != lista[j].second and lista[j].second != '-' and lista[i].second != '-')
                {
                    ans++;
                    lista[i].second = '-';
                    lista[j].second = '-';
                }
        cout << ans << "\n";
    }

    return 0;
}