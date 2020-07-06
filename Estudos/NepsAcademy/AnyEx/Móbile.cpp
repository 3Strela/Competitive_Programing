#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graf;
bool taCerto = true;

int dfs(int nodo)
{
    int prof = 1, qtf = -1;

    for (auto f : graf[nodo])
    {
        int fi = dfs(f);
        prof += fi;

        if (qtf == -1)
            qtf = fi;
        else if (fi != qtf)
            taCerto = false;
    }

    return prof;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    graf.resize(n + 1);

    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> v >> u;
        graf[u].push_back(v);
    }

    dfs(0);

    cout << (taCerto ? "bem\n" : "mal\n");

    return 0;
}