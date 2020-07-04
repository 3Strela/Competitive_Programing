#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans;
    cin >> n;
    vector<int> lista(n);
    for (int i = 0; i < n - 1; i++)
        cin >> lista[i];
    sort(lista.begin(), lista.end());
    for (int i = 0; i < n; i++)
        if (i + 1 != lista[i + 1])
        {
            cout << i + 1 << "\n";
            break;
        }

    return 0;
}