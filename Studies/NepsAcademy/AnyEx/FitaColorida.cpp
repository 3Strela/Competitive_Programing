#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> lista(n + 1), esq(n + 2, 999999999), dir(n + 2, 999999999);
    for (int i = 1; i <= n; i++)
        cin >> lista[i];
    for (int i = 1; i <= n; i++)
        if (lista[i] == 0)
            esq[i] = 0;
        else
            esq[i] = esq[i - 1] + 1;
    for (int i = n; i > 0; i--)
        if (lista[i] == 0)
            dir[i] = 0;
        else
            dir[i] = dir[i + 1] + 1;
    for (int i = 1; i <= n; i++)
        cout << min(9, min(esq[i], dir[i])) << " ";
    cout << "\n";

    return 0;
}