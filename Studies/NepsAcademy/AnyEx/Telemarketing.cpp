#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main()
{
    int n, l;
    cin >> n >> l;

    priority_queue<pii, vector<pii>, greater<pii>> vendedores;
    vector<int> ans(n);
    for (int i = 1; i <= n; i++)
        vendedores.push({0, i});

    for (int i = 0; i < l; i++)
    {
        int t;
        cin >> t;

        pii v = vendedores.top();
        vendedores.pop();

        ans[v.second - 1]++;

        vendedores.push({v.first + t, v.second});
    }

    for (int i = 0; i < n; i++)
        cout << i + 1 << " " << ans[i] << "\n";

    return 0;
}