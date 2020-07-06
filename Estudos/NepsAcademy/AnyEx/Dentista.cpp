#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> consulta(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> consulta[i].second >> consulta[i].first;

    sort(consulta.begin(), consulta.end());

    int ans = 0, livre = -1;
    for (int i = 1; i <= n; i++)
        if (consulta[i].second >= livre)
        {
            ans++;
            livre = consulta[i].first;
        }

    cout << ans << "\n";

    return 0;
}