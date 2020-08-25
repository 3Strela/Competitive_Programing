#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    pair<int, char> pe;
    
    while (cin >> n)
    {
        vector<pair<int, char>> lista(n);
        for (int i = 0; i < n; i++)
            cin >> lista[i].first >> lista[i].second;
        
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
}