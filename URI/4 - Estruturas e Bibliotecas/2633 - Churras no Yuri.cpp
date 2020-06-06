#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while (cin >> n)
    {
        vector<pair<int, string>> carnes(n);
        for (int i = 0; i < n; i++)
            cin >> carnes[i].second >> carnes[i].first;
        sort(carnes.begin(), carnes.end());
        for (int i = 0; i < carnes.size(); i++)
            if (i == carnes.size() - 1)
                cout << carnes[i].second << "\n";
            else
                cout << carnes[i].second << " ";
    }

    return 0;
}