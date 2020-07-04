#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<string> lista(n);
    for (int i = 0; i < n; i++)
        cin >> lista[i];
    sort(lista.begin(), lista.end());
    cout << lista[k - 1] << "\n";

    return 0;
}