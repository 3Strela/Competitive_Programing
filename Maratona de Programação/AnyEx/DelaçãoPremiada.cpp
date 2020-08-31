#include <bits/stdc++.h>
using namespace std;

priority_queue<int> presos;

void dfs(int nodo, vector<int> &ps, vector<vector<int>> &graf)
{
    int ax = 0;
    ps[nodo] = 1;

    for (int f : graf[nodo])
    {
        dfs(f, ps, graf);

        if (ps[f] > ps[ax])
            ax = f;
    }

    for (int f : graf[nodo])
        if (f != ax)
            presos.push(ps[f]);

    ps[nodo] += ps[ax];
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<vector<int>> graf(n + 1);
    vector<int> peso(n + 1);

    for (int i = 1; i <= n - 1; i++)
    {
        int id;
        cin >> id;

        graf[id].push_back(i + 1);
    }

    dfs(1, peso, graf);
    presos.push(peso[1]);

    int ans = 0;
    while (k-- and !presos.empty())
        ans += presos.top(), presos.pop();

    cout << ans << "\n";

    return 0;
}