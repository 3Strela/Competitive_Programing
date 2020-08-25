#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;

    while (cin >> n)
    {
        vector<pair<int, int>> lis;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            lis.push_back({b, a});
        }
        
        sort(lis.begin(), lis.end());

        stack<pair<int, int>> pilha;

        for (int i = 0; i < n; i++)
            if (pilha.empty())
                pilha.push({lis[i].second, lis[i].first});
            else
            {
                pair<int, int> hondas = pilha.top();

                pair<int, int> poca = {lis[i].second, lis[i].first};

                if (hondas.second >= poca.first and poca.second >= hondas.second)
                {
                    pilha.pop();
                    pilha.push({poca.first, hondas.second});
                }
                else
                    pilha.push(poca);
            }

        cout << pilha.size() << "\n";
    }

    return 0;
}