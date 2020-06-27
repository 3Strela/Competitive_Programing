#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<ulli> faixa(n - 1), premi(n), ans;
    for (int i = 0; i < n - 1; i++)
        cin >> faixa[i];
    for (int i = 0; i < n; i++)
        cin >> premi[i];
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        int de = 0, ate = n - 2;
        while (de < ate)
        {
            int meio = (de + ate) / 2;
            if (faixa[meio] <= temp)
                de = meio + 1;
            else if (faixa[meio] > temp)
                ate = meio - 1;
        }
        if (temp < faixa[de])
            ans.push_back(premi[de]);
        else
            ans.push_back(premi[de + 1]);
    }
    for (int i = 0; i < ans.size(); i++)
        if (i == ans.size() - 1)
            cout << ans[i] << "\n";
        else
            cout << ans[i] << " ";

    return 0;
}