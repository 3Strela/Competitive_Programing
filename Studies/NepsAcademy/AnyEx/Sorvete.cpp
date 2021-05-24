#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, s;
    cin >> p >> s;
    vector<pair<int, int>> dist(s);
    vector<int> vinda, ida;
    for (int i = 0; i < s; i++)
        cin >> dist[i].first >> dist[i].second;
    sort(dist.begin(), dist.end());
    int ini = dist[0].first, fim = dist[0].second, i;
    for (i = 1; i < s; i++)
    {
        while (i < s and dist[i].first <= fim)
        {
            if (dist[i].second > fim)
                fim = dist[i].second;
            i++;
        }
        cout << ini << " " << fim << "\n";
        ini = dist[i].first;
        fim = dist[i].second;
    }
    if (i == s)
        cout << ini << " " << fim << "\n";
    cout << "\n";
    
    return 0;
}